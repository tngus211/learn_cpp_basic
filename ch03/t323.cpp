//프로그램3-23 부동소수점 조정자 사용하기
/* 부동 소수점 자료형과 관련된 몇가지 조정자 사용하기*/
#include <iostream>
using namespace std;
int main()
{
    double x = 1237;
    double y = 12376745.5623;

    cout << "x의 고정 소수점 형식 : " << x << endl;
    cout << "x의 조겅 소수점 형식 : " << showpoint << x << endl;

    cout << "y의 과학적 표기법 형식 : " << y << scientific << endl;
    return 0;
}