//프로그래밍 문제 5-8
//1~100의 범위에 있는 양의 정수를 읽어 들이고 약수 출력
#include <iostream>
using namespace std;
int main()
{
    int num;

    do 
    {
        cout << "양의 정수 입력(1~100) : ";
        cin >> num;
    } while (num < 0);

    for (int cm = 1; cm <= num; cm++)
    {
        if (num % cm == 0)
        {
            cout << cm << "    ";
        }
    }
    cout << endl;
    return 0;
}