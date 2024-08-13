//프로그램 5-15 숫자 패턴 출력하기
/* 반복문을 중첩해서 숫자를 정해진 패터능로 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    int cols;

    cout << "행의 수 입력 : ";
    cin >> rows;
    cout << "열의 수 입력 : ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= i + cols - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}