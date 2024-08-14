//프로그래밍 문제 5-12
//2000년부터 2099년까지의 범위에 있는 윤년을 출력하는 프로그램
#include <iostream>
using namespace std;
int main()
{
    bool leapyear;
    for (int year = 2000; year <= 2099; year++)
    {
        leapyear = (year % 400) || (year % 4) && !(year % 100);
        if (leapyear == 0)
        {
            cout << year << "  ";
        }
    }
    cout << endl;
    return 0;
}