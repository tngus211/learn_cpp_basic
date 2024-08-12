//프로그램3-15 부가 효과를 가진 표현식
/* 부가 효과를 가진 단순 표현식의 평가*/
#include <iostream>
using namespace std;
int main()
{
    int x = 8;
    int y = 10;

    y *= x + 5;

    cout << "y의 값 : " << y << endl;
    return 0;
}