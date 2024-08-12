//프로그래밍 문제 3-7 (3-8,3-9는 Lab 예제 문제와 동일함기때문에 생략함)
// 시간을 입력받았을 때, 이를 주, 일(0~6일 사이의 값), 시간(0~23시 사이의 값)으로 변환하는 프로그램 만들기
/* 해결방법
    1)시간을 입력받을 변수 필요
    2)주,일,시간의 값을 받을 변수 필요
    3)'/'와'%'연산자 활용->시간/24 = 일, 일/7 = 주*/
#include <iostream>
using namespace std;
int main()
{
    long time, week, day, hour;

    cout << "시간 입력(단위 : 시(h)) : ";
    cin >> time;

    week = (time / 24) / 7;
    day = (time / 24) % 7;    
    hour = time % 24;

    cout << "입력 받은 시간(단위 : 시) : " << time << endl;
    cout << "변환 결과 : " << week << "주 " << day << "일 " << hour << "시" << endl;
    return 0; 
}