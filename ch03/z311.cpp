//프로그래밍 문제 3-11 (3-12와 문제가 동일하기 때문에 3-12는 제외)
//주어진 섭씨 온도(Celsius)를 화씨 온도(Fahrenheit)로 변환해서 출력하는 프로그램 만들기
//F = (9/5)C + 32
/* 해결방법
    1)화씨 온도와 섭씨온도를 받을 변수 필요
    2)자료형을 double로->온도를 다루기 때문에 실수 범위에서 해야하며, 엄청나게 큰수나 작은수가 올 수 있기 때문에*/
#include <iostream>
using namespace std;
int main()
{
    double celesius, fahrenheit;

    cout << "섭씨 온도 입력 : ";
    cin >> celesius;

    fahrenheit = (9 / 5) * celesius + 32;

    cout << "화씨 온도로 변환한 결과 : " << fahrenheit << endl;
    return 0;
}