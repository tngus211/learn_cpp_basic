//프로그래밍 문제 5-9
//1~100의 범위에 있는 양의 정수 2개를 읽어 들이고 공약수 출력
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, max;

    do
    {
        cout << "첫번째 양의 정수 입력 : ";
        cin >> num1;
    } while ((num1 <= 0) || (num1 > 100));
    do 
    {
        cout << "두번째 양의 정수 입력 : ";
        cin >> num2;
    } while ((num2 <= 0) || (num2 > 100));

    if (num1 < num2)
    {
        max = num2;
    }
    else 
    {
        max = num1;
    }

    for (int cm = 1; cm <= max; cm++)
    {
        if ((num1 % cm == 0) && (num2 % cm == 0))
        {
            cout << cm << "    ";
        }
    }
    cout << endl;
    return 0;
}