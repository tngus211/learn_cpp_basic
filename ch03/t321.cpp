//프로그램3-21 boolalpha 조정자 사용하기
/* 불 자료형에 boolalpha 조정자 사용하기*/
#include <iostream>
using namespace std;
int main()
{
    bool x = true;
    bool y = false;

    cout << "기본적인 x의 출력 : " << x << endl;
    cout << "기본적인 y의 출력 : " << y << endl;

    cout << "조정자를 사용한 x의 값 : " << boolalpha << x << endl;
    cout << "y의 값 : " << y << endl;
    return 0; 
}