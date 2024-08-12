//프로그램3-9 암묵적 자료형 변환(부가 작용 없음)
/* 부가 작용이 없는 여러 자료형이 사용된 표현식의 암묵적 자료형 변환*/
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int x = 123;
    long y = 140;
    double z = 114.56;

    cout << "x + y의 자료형 : " << typeid(x + y).name() << endl;
    cout << "x + y의 값 : " << x + y << endl << endl;
    
    cout << "x + y + z의 자료형 : " << typeid(x + y + z).name() << endl;
    cout << "x + y + z의 값 : " << x + y + z << endl;
    return 0;
}