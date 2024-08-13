//프로그래밍 문제 5-16
//0~99의 범위에 있는 모든 정수 섭씨온도를 화씨 온도로 변환해서 표 형태로 출력하는 프로그램 만들기
#include <iostream>
using namespace std;
int main()
{
    for (int celsius = 0; celsius <= 99; celsius++)
    {
        double fahr = celsius * 1.8 + 32;
        cout << celsius << "    " << fahr << endl;
    }
}