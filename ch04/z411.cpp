//프로그래밍 문제 4-11
//사용자로부터 달러 값을 입력받고, 달러 지폐로 이를 지불할 때 지폐의 개수가 최소가 되는 경우를 출력하는 프로그램 만들기
//0이 아닌 수의 지폐 수만 출력하면 됩니다.
//참고로 달러는 100 달러, 50달러, 20달러, 10달러, 5달러, 1달러 지폐가 있습니다.
/* 해결방법
    1)달러값을 입력받을 변수 필요
    2)'/'와 '%' 연산자 사용*/
#include <iostream>
using namespace std;
int main()
{
    long int dollar;
    int num100, num50, num20, num10, num5, num1, total;

    cout << "지불해야 할 값(단위 : 달러) : ";
    cin >> dollar;

    num100 = dollar / 100;
    num50 = (dollar % 100) / 50;
    num20 = ((dollar % 100) % 50) / 20;
    num10 = (((dollar % 100) % 50) % 20) / 10;
    num5 = (dollar % 10) / 5;
    num1 = (dollar % 10) % 5;

    total = num100 + num50 + num20 + num10 + num5 + num1;

    cout << "지불해야할 지폐의 총합 : " << total << endl;
    
    if (num100 != 0)
    {
        cout << "지불해야할 100달러의 수 : " << num100 << endl;
    }
    if (num50 != 0)
    {
        cout << "지불해야할 50달러의 수 : " << num50 << endl;
    }
    if (num20 != 0)
    {
        cout << "지불해야할 20달러의 수 : " << num20 << endl;
    }
    if (num10 != 0)
    {
        cout << "지불해야할 10달러의 수 : " << num10 << endl;
    }
    if (num5 != 0)
    {
        cout << "지불해야할 5달러의 수 : " << num5 << endl;
    }
    if (num1 != 0)
    {
        cout << "지불해야할 1달러의 수 : " << num1 << endl;
    }
    return 0;
}