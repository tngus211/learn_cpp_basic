//[Lab]프로그램3-20 초 단위의 시간을 시, 분, 초 단위로 나누어서 변환하기
/* 초 단위로 입력받은 시간을 시, 분, 초 단위로 나누어서 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    unsigned int duration, hours, minutes, seconds;

    cout << "초 단위의 시간을 양의 정수로 입력 : ";
    cin >> duration;

    hours = duration / 3600L;
    minutes = (duration - (hours * 3600L)) / 60L;
    seconds = duration -(hours * 3600L) - (minutes * 60);
    /*다른 방법(식을 조금더 간단하게 만드는 방법)
    hours = duration / 3600L;
    minutes = (duration % 3600L) / 60L;
    seconds = (duration % 3600L) % 60L;*/
    cout << "입력된 초 단위 시간 : " << duration << endl;
    cout << "결과 : ";
    cout << hours << "시 ";
    cout << minutes << "분 ";
    cout << seconds << "초";
    return 0;
}