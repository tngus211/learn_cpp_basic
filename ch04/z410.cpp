//프로그래밍 문제 4-10
//특정 날짜의 요일을 맞추는 첼러의 공식을 활용해서 사용자로부터 연도, 월, 일을 입력받았을 때,
//요일을 출력하는 프로그램 만들기
#include <iostream>
using namespace std;
int main()
{
    int day = 0, month =0, year =0;

    cout << "몇 년인지 입력 : ";
    cin >> year;
    cout << "몇 월인지 입력 : ";
    cin >> month;
    cout << "며칠인지 입력 : ";
    cin >> day;

    bool leapyear = (year % 400) || (year % 4 && !(year % 100));
    int weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;

    if (leapyear == 0)
    {
        switch(weekday)
        {
            case 6 : cout << "토요일" << endl;
                    break;
            case 5 : cout << "금요일" << endl;
                    break;
            case 4 : cout << "목요일" << endl;
                    break;
            case 3 : cout << "수요일" << endl;
                    break;
            case 2 : cout << "화요일" << endl;
                    break;
            case 1 : cout << "월요일" << endl;
                    break;
            case 0 : cout << "일요일" << endl;
                    break;
        }
    }
    else
    {
        switch(weekday)
        {
            case 6 : cout << "일요일" << endl;
                    break;
            case 5 : cout << "토요일" << endl;
                    break;
            case 4 : cout << "금요일" << endl;
                    break;
            case 3 : cout << "목요일" << endl;
                    break;
            case 2 : cout << "수요일" << endl;
                    break;
            case 1 : cout << "화요일" << endl;
                    break;
            case 0 : cout << "월요일" << endl;
                    break;
        }
    }
    return 0;
}