//프로그램3-11 명시적 자료형 변환
/* 표현식 내부에서의 명시적 자료형 변환과 암묵적 자료형 변환 비교*/
#include <iostream>
using namespace std;
int main()
{
    double x = 23.56;
    int y = 30;

    cout << "캐스팅을 하지 않는 경우 : " << x + y << endl;
    cout << "캐스팅을 한 경우 : " << static_cast<int>(x) + y << endl;
    return 0;
}