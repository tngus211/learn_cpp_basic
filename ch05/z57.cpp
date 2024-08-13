//프로그래밍 문제 5-7
//1~100의 범위에 있는 정수 중에서 5와 7로 동시에 나눌 수 있는 숫자들 출력
#include <iostream>
using namespace std;
int main()
{
    int cm = 35;
    cout << "5와 7로 동시에 나눌 수 있는 수 : ";
    
    for (int num = 1; num <= 100; num++)
    {
        if (num % 35 == 0)
        {
            cout << num << "  ";
        }
    }
    cout << endl;
    return 0;
}