//[Lab]프로그램4-17 날 수 구하기
/* 몇 월 며칠을 입력받았을 대, 해당 날짜가 올해 몇번째 날짜인지 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int month;
    int day;
    int totalDay;

    cout << "몇 월인지 입력 : ";
    cin >> month;
    cout << "며칠인지 입력 : ";
    cin >> day;

    int m01 = 31;
    int m02 = 28;
    int m03 = 31;
    int m04 = 30;
    int m05 = 31;
    int m06 = 30;
    int m07 = 31;
    int m08 = 31;
    int m09 = 30;
    int m10 = 31;
    int m11 = 30;

    switch (month)
    {
        case 12 : totalDay += m11;
        case 11 : totalDay += m10;
        case 10 : totalDay += m09;
        case 9 : totalDay += m08;
        case 8 : totalDay += m07;
        case 7 : totalDay += m06;
        case 6 : totalDay += m05;
        case 5 : totalDay += m04;
        case 4 : totalDay += m03;
        case 3 : totalDay += m02;
        case 2 : totalDay += m01;
        case 1 : totalDay += 0;
    }

    totalDay += day;

    cout << "올해의 " << totalDay << "번째 날입니다." << endl;
    return 0;
}