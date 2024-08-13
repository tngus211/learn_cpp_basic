//프로그램 5-16 곱셈 표 만들기
/* 반복문을 중첩해서 2~10 범위를 갖는 크기와 곱셈 표를 출력하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int size;

    do
    {
        cout << "표의 크기 입력(2~10) :";
        cin >> size;
    } while (size < 2 || size > 10);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    return 0;
}