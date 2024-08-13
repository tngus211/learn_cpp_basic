//프로그램 5-11 한 달을 달력 형태로 출력하기
/* 한 달의 날짜 수와 첫 날의 요일을 입력받고,
    달력 형태로 한 달을 출력하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int startday;
    int dayinmonth;
    int col = 1;

    do
    {
        cout << "한 달의 날짜 수를 입력(28,29,30,31) : ";
        cin >> dayinmonth;
    } while (dayinmonth < 28 || dayinmonth > 31);

    do
    {
        cout << "첫 날의 요일 입력(0~6) : ";
        cin >> startday;
    } while (startday < 0 || startday > 6);

    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;

    for (int space = 0; space < startday; space++)
    {
        cout << "    ";
        col++;
    }
    
    for (int day = 1; day <= dayinmonth; day++)
    {
        cout << setw(3) << day << " ";
        col++;
        if (col > 7)
        {
            cout << endl;
            col =1;
        }
    }
}