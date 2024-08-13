//프로그램 5-10 7로 나눌 수 있는 숫자 출력하기
/* 1~30 사이의 범위에 있는 7로 나눌 수 있는 정수를 10개의 열을 가진 표 형식으로 출력*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int lower = 0;
    int higher = 300;
    int divisior = 7;
    int col = 1;

    for (int i = lower; i < higher; i++)
    {
        if (i % divisior == 0)
        {
            cout << setw(4) << i;
            col++;
            if (col > 10)
            {
                cout << endl;
                col = 1;
            }
        }
    }
    return 0;
}