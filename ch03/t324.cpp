//프로그램3-24 매개변수가 있는 조정자
/* 부동 소수점 관련 조정자 사용하기*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x = 1237234.1235;

    cout << fixed << setprecision(2) << showpos << setfill('*');
    
    cout << setw(15) << left << x << endl;
    cout << setw(15) << internal << x << endl;
    cout << setw(15) << right << x << endl;
    return 0;
}