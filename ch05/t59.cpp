//프로그램 5-9 for반복문으로 0~n-1까지 출력하기
/* 0부터 n-1까지 for반복문으로 출력하기*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "출력할 정수 입력 : ";
    cin >> n;
    for (int counter; counter < n; counter++)
    {
        cout << counter << " ";
    }
    return 0;
}