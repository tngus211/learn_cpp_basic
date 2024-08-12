//프로그램2-4 부호 없는 정수 사용하기
/* 동전과 지폐들의 금액 합계를 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    const unsigned int pennyvalue = 1;
    const unsigned int nickelvalue = 5;
    const unsigned int dimevalue = 10;
    const unsigned int quartervalue = 25;
    const unsigned int dollarvalue = 100;

    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;

    unsigned long totalvalue;

    cout << "페니의 수 : ";
    cin >> pennies;
    cout << "니켈의 수 : ";
    cin >> nickels;
    cout << "다임의 수 : ";
    cin >> dimes;
    cout << "쿼터의 수 : ";
    cin >> quarters;
    cout << "달러의 수 : ";
    cin >> dollars;

    totalvalue = (pennies * pennyvalue) + (nickels * nickelvalue) + (dimes * dimevalue) + (quarters * quartervalue) + (dollars * dollarvalue);

    cout << "전체 값은 " << totalvalue << "페니입니다." << endl;
    return 0;
}