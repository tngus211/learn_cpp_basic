//프로그램2-11 불 자료형 결과 확인하기
/* 불 변수와 값을 사용하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    bool x = 123;
    bool y = -8;
    bool z = 0;
    bool t = -0;
    bool u = true;
    bool v = false;

    cout << "x의 값 : " << x << endl;
    cout << "y의 값 : " << y << endl;
    cout << "z의 값 : " << z << endl;
    cout << "t의 값 : " << t << endl;
    cout << "u의 값 : " << u << endl;
    cout << "v의 값 : " << v << endl;
    return 0;
}