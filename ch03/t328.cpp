//[Lab]프로그매3-28 숫자에서 정수 부분과 소수점 아래 부분을 분리해서 추출하는 프로그램
/* 주어진 부동 소수점의 정수 부분과 소수점 아래 부분을 추출해서 출력하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num;
    int intpart;
    double fractpart;

    cout << "수 입력 : ";
    cin >> num;

    intpart = static_cast<int>(num);
    fractpart = num - intpart;

    cout << fixed << showpoint << setprecision(2);
    cout << "원래 값 : " << num << endl;
    cout << "정수부 : " << intpart << endl;
    cout << "소수부 : " << fractpart << endl;
    return 0;
}