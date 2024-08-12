//프로그램3-10 암묵적 자료형 변환(부가 작용 있음)
/* 자료형이 섞인 포현식의 자료형 변환 확인하기*/
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int x;
    double y;

    x = 23.67;
    y = 130;

    cout << "x = 23.67의 자료형 : " << typeid(x = 23.67).name() << endl;
    cout << "할당 후의 x의 값 : " << x << endl << endl;

    cout << "y = 130의 자료형 : " << typeid(y = 130).name() << endl;
    cout << "할당 후의 y의 값 : " << y << endl;
    return 0;
}