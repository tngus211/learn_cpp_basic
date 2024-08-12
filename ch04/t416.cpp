//[Lab]프로그램4-16 소득 범위에 따른 세금 구하기
/* 4가지 서로 다른 소득 번위를 기반으로 세금을 계산해서 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    double income, tax;
    bool bracket1, bracket2, bracket3, bracket4;
    double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00;
    double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;

    cout << "수입 입력(단위 : 달러) : ";
    cin >> income;

    bracket1 = (income <= limit1) && (income >= 0);
    bracket2 = (income > limit1) && (income <= limit2);
    bracket3 = (income > limit2) && (income <= limit3);
    bracket4 = (income > limit3);

    if (bracket1)
    {
        tax = income * rate1;
    }
    else if (bracket2)
    {
        tax = limit1 * rate1 + (income - limit1) * rate2;
    }
    else if (bracket3)
    {
        tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit2) * rate3;
    }
    else
    {
        cout << "입력에 문제가 있습니다." << endl;
        return 0;    
    }

    cout << "수입 : " << income << endl;
    cout << "세금 : " << tax << endl;
    return 0;
}