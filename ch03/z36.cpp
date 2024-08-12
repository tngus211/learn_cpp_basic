//프로그래밍 문제 3-6
//세 자릿수 정수가 주어졌을때, 해당 숫자를 역순으로 하는 정수를 구성하고 출력하는 프로그램 만들기
/*해결방법
 1)숫자를 입력 받은 변수 필요
 2)백의 자리, 십의 자리, 일의 자리 숫자를 받을 변수 필요
 3)'/'와 '%'연산 활용
 4)주어진 정수가 음수라면..?->if-else문 사용*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    int num1, num2, num3;

    cout << "정수 입력 : ";
    cin >> num;

    if (num > 0)
    {
        num3 = num / 100;
        num2 = (num % 100) / 10;
        num1 = (num % 100) % 10;
    }
    else
    {
        num = -num;
        num3 = num / 100;
        num2 = (num % 100) / 10;
        num1 = ((num % 100) % 10) * -1; //일의 자리숫자는 역순이 될 경우 백의 자리가 됨. 따라서 음수일 경우 일의 자리에 음의 부호가 있어야함
    }
    cout << "입력받은 숫자 역순으로 출력 : " << num1 << num2 << num3 << endl;
    return 0;
}