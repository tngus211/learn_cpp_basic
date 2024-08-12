//ㅍ로그램3-3 플러스, 마이너스 기호 테스트
/* 덧셈/뺄셈 표현식을 몇 가지 보여주는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    int y = -10;

    cout << "x에 양수 연산자 적용하기 : " << +x << endl;
    cout << "x에 음수 연산자 적용하기 : " << -x << endl;

    cout << "y에 양수 연산자 적용하기 : " << +y << endl;
    cout << "y에 음수 연산자 적용하기 : " << -y << endl;
    return 0;
}