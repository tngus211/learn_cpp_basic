//프로그램2-5 부호 있는 정수 사용하기
/* 3회 거래 후의 계좌 잔액을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int balance = 0;
    int transaction;

    cout << "첫번쨰 거래 금액 입력 : ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "두번째 거래 금액 입력 : ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "세번째 거래 금액 입력 : ";
    cin >> transaction;
    balance = balance + transaction;

    cout << "계좌의 최종 잔액은 " << balance << "달러입니다. " << endl;
    return 0;
}