//프로그램4-8 온도를 기반으로 에어컨 냉난방하기
/* 특정한 온도 범위에 따라 에어컨을 냉방 또는 난방으로 가동하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int temperature;
    bool hot;
    bool cold;

    cout << "현재 온도를 입력 : ";
    cin >> temperature;

    hot = (temperature >= 23);
    cold = (temperature <= 15);

    if (hot || cold)
    {
        cout << "에어컨이 켜집니다." << endl;
        if (hot)
        {
            cout << "냉방 모드로 작동합니다." << endl;
        }
        else
        {
            cout << "난방 모드로 작동합니다." << endl;
        }
    }
    else
    {
        cout << "에어컨이 꺼집니다." << endl;
    }
    return 0;
}