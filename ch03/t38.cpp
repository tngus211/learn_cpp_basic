//프로그램3-8 암묵적 자료형 승격
/* 산술 연산자가 없는 자료형(bool, char, short, float)에 산술 연산자를 적용해서 암묵적 자료형 변환하기*/
#include <iostream>
using namespace std;
int main()
{
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;

    cout << "x + 100의 자료형 : " << typeid(x + 100).name() << endl;
    cout << "x + 100의 값 : " << x + 100 << endl;

    cout << "y + 1000의 자료형 : " << typeid(y + 1000).name() << endl;
    cout << "y + 1000의 값 : " << y + 1000 << endl;

    cout << "z * 100의 자료형 : " << typeid(z * 100).name() << endl;
    cout << "z * 100의 값 : " << z * 100 << endl;
    
    cout << "t + 15000.2의 자료형 : " << typeid(t + 15000.2).name() << endl;
    cout << "t + 15000.2의 값 : " << t + 15000.2 << endl;
    return 0;
}