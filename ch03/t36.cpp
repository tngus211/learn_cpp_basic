//프로그램3-6 단순 할당 연산자
/* 단순 할당 연산자 확인하기*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;

    cout << "할당 표현식의 리턴값 : " << (x = 14) << endl;
    cout << "변수 x의 값 : " << x << endl;

    cout << "할당 표현식의 리턴값 : " << (y = 87) << endl;
    cout << "변수 y의 값 : " << y << endl;
    return 0;
}