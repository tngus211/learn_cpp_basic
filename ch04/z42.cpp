//프로그래밍 문제 4-2
//3개의 정수를 입력받고, 가장 작은 것을 출력하는 프로그램 만들기
/* 해결방법
    1)3개의 정수를 입력받을 변수 필요 -> long int가 좋을듯
    2)if-else문 활용
    3)'>'와'<' 활용*/
#include <iostream>
using namespace std;
int main()
{
    long int num1, num2, num3;

    cout << "첫번째 정수 입력 : ";
    cin >> num1;
    cout << "두번째 정수 입력 : ";
    cin >> num2;
    cout << "세번째 정수 입력 : ";
    cin >> num3;

    if ((num1 <= num2) && (num1 <= num3))
    {
        cout << "가장 작은 정수 : " << num1 << endl;
        return 0;
    }
    else if ((num2 <= num3) && (num2 <= num1))
    {
        cout << "가장 작은 정수 : " << num2 << endl;
        return 0;
    }
    else
    {
        cout << "가장 작은 정수 : " << num3 << endl;
        return 0;
    }
}