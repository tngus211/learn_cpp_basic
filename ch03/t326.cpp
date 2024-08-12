//프로그램3-26 여러 진법으로 정수 입력받기
/* 여러 진법의 정수 입력받기*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "첫번째 숫자 10진수로 입력 : ";
    cin >> num1;

    cout << "두번째 숫자 8진수로 입력 : ";
    cin >> oct >> num2;

    cout << "세번째 숫자 16진수로 입력 : ";
    cin >> hex >> num3;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    return 0;
}