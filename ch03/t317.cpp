//프로그램3-17 같은 우선 순위를 갖는 표현식들
/* 오른쪽에서 왼쪽(<-)으로 결합 방향을 갖는 표현식*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;

    y += x *= 40;

    cout << "x의 값 : " << x << endl;
    cout << "y의 값 : " << y << endl;
    return 0;
}