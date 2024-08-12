//프로그램4-14 조건부 표현식
/* 두 숫자를 입려받은 뒤에 두 숫자 중에 더 큰 숫자 또는 같을 경우 첫번째 숫자를 조건부 표현식으로 찾아 출력하기*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int large;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번쨰 숫자 입력 : ";
    cin >> num2;

    large = (num1 >= num2 ? num1 : num2);

    cout << "더 큰 숫자 : " << large << endl;
    return 0;
}