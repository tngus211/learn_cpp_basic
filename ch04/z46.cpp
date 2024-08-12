//프로그래밍 문제 4-6
//대학교에서 학생의 총 수업료를 계산하고 출력하는 프로그램 만들기
//학생들은 최대 12학점에 대해 학점당 10달러의 수수료를 지불해갸함
//12학점을 넘는 분량은 수수료가 없음
//등록비는 학생당 10달러라 가정하자
/* 해결방법
    1)이수학점을 받아야함
    2)if-else문을 이용해서 12학점 미만과 이상을 나누어야함*/
#include <iostream>
using namespace std;
int main()
{
    int study, count, total;

    cout << "이수 학점 : ";
    cin >> study;

    if (study > 12)
    {
        count = (study -12);
        total = 10 + 12 * 10 + count * 0;
    }
    else
    {
        total = 10 + study * 10;
    }
    cout << "총 수업료 : " << total << endl;
    return 0;
}