//프로그래밍 문제3-13
//아르바이트로 일주일에 기본 40시간을 일한다고 가정합니다. 그리고 40시간을 넘게 일을 하는 경우, 넘는 시급은 60%가 추가로 지급된니다.
//일주일의 기본 듭여와 추가로 일한 시간을 입력했을 때, 전체 급여를 구하는 프로그램 만들기
/* 해결방안
    1)기본 급여가 얼마인지 받아야함->기본급여를 받는 변수 필요
    2)기본 급여의 60%가 얼마인지 구하고, 해당 값을 받는 변수 필요
    3)추가로 일한 시간을 받아야함*/
#include <iostream>
using namespace std;
int main()
{
    int money, plustime, plusmoney, total;

    cout << "시급 : ";
    cin >> money;
    cout << "추가로 일한 시간 : ";
    cin >> plustime;

    plusmoney = money * 0.6 * plustime;
    total = plusmoney + 40 * money;

    cout << "전체 급여 : " << total << endl;
    return 0;
}