//프로그램 4-2 초과 근무 시간이 있는 급여 계산하기
/* if 조건문을 사용해서 초과 근무 시간이 있는 급여 계산하기*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double hours;
    double rate;
    double regularPay;
    double overPay;
    double totalPay;
    
    cout << "업무 시간 입력 : ";
    cin >> hours;
    cout << "시간당 급여 입력 : ";
    cin >> rate;
    
    regularPay = hours * rate;
    overPay = 0.0;

    if (hours > 40.0)
    {
        overPay = (hours - 40.0) * rate * 0.30;
    }
    totalPay = regularPay + overPay;

    cout << fixed << showpoint;
    cout << "일반 급여 : " << setprecision(2) << regularPay << endl;
    cout << "초과 근무에 대한 급여 : " << setprecision(2) << overPay << endl;
    cout << "전체 급여 : " << setprecision(2) << totalPay << endl;
    return 0;
}