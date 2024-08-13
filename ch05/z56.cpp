//프로그래밍 문제 5-6
//1~100의 범위에 있는 정수 중에서 7로 나눌 수 있는 숫자들 출력
#include <iostream>
using namespace std;
int main()
{
    int cm = 7;
    cout << "1~100의 범위에 있는 정수 중 7로 나눌 수 있는 숫자 : ";
    for(int num = 1; num <= 100; num++)
    {
        if (num % cm == 0)
        {
            cout << num << "    ";
        }
    }
    cout << endl;
    return 0;
}