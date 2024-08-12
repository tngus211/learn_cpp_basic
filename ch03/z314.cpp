//프로그래밍 문제 3-14
//1,400달러의 텔레비전, 220달러의 DVD 플레이어, 35.20달러의 리모컨 3가지 제품을 판매하는 회사가 있습니다.
//고객이 구입한 장비의 수를 입력으로 받는다고 할 때, 8.25%의 소비세가 추가된 전체 비용을 계산하는 프로그램 만들기
/* 해결방안
    1)텔레비전, DVD 플레이어, 리모컨의 가격을 나타내는 변수 필요
    2)텔레비전, DVD 플레이어, 리모컨의 구입 개수를 받을 변수 필요
    3)전체 비용을 받을 변수 필요->타입은 double*/
#include <iostream>
using namespace std;
int main()
{
    double tvvalue, dvdvalue, revalue;
    int tv, dvd, re;
    double total, tax;

    tvvalue = 1400;
    dvdvalue = 220;
    revalue = 35.20;

    cout << "구입한 텔레비전의 수 : ";
    cin >> tv;
    cout << "구입한 DVD 플레이어의 수 : ";
    cin >> dvd;
    cout << "구입한 리모컨의 수 : ";
    cin >> re;

    tax = (tv * tvvalue * 0.0825) + (dvd * dvdvalue * 0.0825) + (re * revalue * 0.0825);
    total = (tv * tvvalue) + (dvd * dvdvalue) + (re * revalue) + tax;

    cout << "소비세 : " << tax << endl;
    cout << "전체 비용 : " << total << endl;
    return 0;
}