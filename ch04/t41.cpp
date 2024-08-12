//프로그램4-1 절댓값 출력하기
/* if 조건문을 사용해서 절댓값을 계산하고 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "정수 입력 : ";
    cin >> number;

    if (number < 0)
    {
        number = -number;
    }

    cout << "입력한 숫자의 절댓값 : " << number << endl;
    return 0;
}