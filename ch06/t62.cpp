//프로그램 6-2 이차방정식의 근 찾기
/* 이차방정식의 근을 찾는 프로그램*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double term;

    cout << "이차항 계수 a입력 : ";
    cin >> a;
    cout << "일차항 계수 b입력 : ";
    cin >> b;
    cout << "상수항 c 입력 : ";
    cin >> c;

    term = pow(b,2) - 4 * a * c;

    if (term < 0)
    {

        cout << "근이 없습니다." << endl;
    }
    else if (term == 0)
    {
        cout << "두 근이 같습니다." << endl;
        cout << "x1 = x2 = " << -b / (2*a) << endl;
    }
    else 
    {
        cout << "서로 다른 2개의 실근을 가집니다. " << endl;
        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
    }
    return 0;
}