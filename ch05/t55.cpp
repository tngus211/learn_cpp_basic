//프로그램5-5 센티넬 제어 반복문으로 입력한 숫자의 합 구하기
/* 센티넬 제어 while 반복문을 사용해서 숫자들의 합 찾기*/
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num;

    cout << "정수 입력(종료하려면 -1 입력) : ";
    cin >> num;

    while (num != -1)
    {
        sum = sum + num;
        cout << "정수 입력(종료하려면 -1 입력) : ";
        cin >> num;
    }
    cout << "합 : " << sum << endl;
    return 0;
}