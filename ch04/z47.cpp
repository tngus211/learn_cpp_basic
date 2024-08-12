//프로그래밍 문제 4-7
//도매점에서 물건을 구매할 때, 다음과 같이 수량에 따라서 추가적인 할인이 들어갑니다.
//물건 하나의 가격과 구매 수량을 입력받고, 할인이 적용된 전체 가격을 출력하는 프로그램 만들기
/* 해결방법
    1)수량에 따라 할인이 다름 -> if-else
    2)수량과 총합을 입력받을 변수 필요*/
#include <iostream>
using namespace std;
int main()
{
    long int num;
    double sell, total;

    cout << "가격 : ";
    cin >> sell;
    cout << "수량 : ";
    cin >> num;

    if ((num > 0) && (num <10))
    {
        total = sell * num;
    }
    else if ((num >= 10) && (num < 50))
    {
        total = sell * num * (1 - 0.03);
    }
    else if ((num >= 50) && (num <100))
    {
        total = sell * num * (1 - 0.05);
    }
    else if ((num >= 100))
    {
        total = sell * num * (1 - 0.1);
    }
    else
    {
        cout << "잘못된 입력입니다. " << endl;
        return 0;
    }
    cout << "총합 : " << total << endl;
    return 0;
}