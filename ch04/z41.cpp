//프로그래밍 문제4-1
//사용자로부터 부호 없는 두 자리 정수를 입력받고, 자리수의 값을 바꿔서 출력하는 프로그램 만들기
/* 해결방법
    1)부호 없는 정수를 받아야함 -> unsigned int 형 변수가 필요
    2)자리수를 바꿔서 출력해야함 -> 십의자리와 일의자리를 각각 받을 변수 필요
    3)'/'와 '%' 연산을 활용*/
#include <iostream>
using namespace std;
int main()
{
    unsigned int num;
    int num1, num2;

    cout << "부호 없는 두 자리 정수 입력 : ";
    cin >> num;

    if ((num > 0) && (num < 100))
    {
        num1 = num % 10;
        num2 = num / 10;
    }
    else
    {
        cout << "잘못된 입력입니다. " << endl;
        return 0;
    }
    cout << "변환 값 : " << num1 << num2 << endl;
    return 0;
}