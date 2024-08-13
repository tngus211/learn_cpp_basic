//[Lab]프로그램 5-19 팩토리얼 구하기
/* 리스트 내부의 숫자 곱을 활용해서 팩토리얼(n!)을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long factorial;

    do
    {
        cout << "팩토리얼의 크기 입력 : ";
        cin >> n;
    } while (n < 0);

    factorial = 1;

    for (int i = 1; i < n + 1; i++)
    {
        factorial *= i;
    }
    cout << n << "! = " << factorial << endl;
    return 0;
}