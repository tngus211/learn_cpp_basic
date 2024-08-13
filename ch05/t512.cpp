//프로그램 5-12 음수가 아닌 정수에서 가장 왼쪽의 숫자 추출하기
/* 사용자로부터 정수를 입력받고 do-while반복문을 이용해여 가장 왼쪼의 숫자를 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    short leftdigit;

    cout << "음수가 아닌 정수 입력 :";
    cin >> num;

    do
    {
        leftdigit = num % 10;
        num = num / 10;
    } while (num > 0);

    cout << "가장 왼쭉의 숫자 : " << leftdigit << endl;
    return 0;
}