//프로그래밍 문제 4-4
//차량의 종류(일반 승용차 c, 버스 b, 트럭은 t)와 주차장에서 차량이 있던 시간을 입력받은 뒤,
//다음과 같은 주차 요금에 따라서 요금을 계산하는 프로그럄 만들기
/* 해결방법
    1)차량의 종류에 따라 요금이 바뀜 -> if-else문
    2)시간을 입력 받을 변수 필요*/
#include <iostream>
using namespace std;
int main()
{
    char trans;
    int time, money;

    cout << "차량의 종류 입력(c:일반 승용차, b:버스, t:트럭) : ";
    cin >> trans;
    cout << "주차 시간 입력 : ";
    cin >> time;

    switch (trans)
    {
        case 'c' : cout << "주차 요금 : " << time * 2 << endl;
                    break;
        case 'b' : cout << "주차 요금 : " << time * 3 << endl;;
                    break;
        case 't' : cout << "주차 요금 : " << time * 4 << endl;
                    break;
        default : cout << "차량 입력이 잘못되었습니다." << endl;
                    break;
    }
    return 0;
/*    if (trans = 'a')
    {
        money = time * 2;
        cout << "주차 요금(단위 : 달러) : " << money << endl;
        return 0;
    }
    else if (trans = 48)
    {
        money = time * 3;
        cout << "주차 요금(단위 : 달러) : " << money << endl;
        return 0;
    }
    else if (trans = 67)
    {
        money = time * 4;
        cout << "주차 요금(단위 : 달러) : " << money << endl;
        return 0;
    }
    else
    {
        cout << "차량 입력이 잘못되었습니다." << endl;
        return 0;
    }
    return 0;*/
}