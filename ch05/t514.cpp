//프로그램 5-14 for반복문 중첩하기
/* 반복문을 중첩해서 * 기호를 정해진 패턴으로 출력하는 프로그램*/
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

    for (int count1 = 1; count1 <= rows; count1++)
    {
        for (int count2 = 1; count2 <= cols; count2++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}