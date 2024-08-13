//[Lab]프로그램 5-20 거듭제곱 구하기
/* 반복문을 사용해서 밑을 지수의 수만큼 곱해서 거듭제곱을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int base, exponent;
    unsigned long int power, temp;
    bool overflow;

    do 
    {
        cout << "밑을 음수가 아닌 정수로 입력 : ";
        cin >> base;
    } while (base < 0);

    do 
    {
        cout << "지수를 음수가 아닌 정수로 입력 : ";
        cin >> exponent;
    } while (exponent < 0);

    power = 1;
    temp = power;
    overflow = false;

    for (int i = 1; (i <= exponent) && (!overflow); i++)
    {
        power *= base;
        if (power / base != temp)
        {
            overflow = true;
        }
        temp = power;
    }

    if (overflow)
    {
        cout << "오버플로우가 발생했습니다. 작은 값으로 시도하세요." << endl;
    }
    else
    {
        cout << base << "^" << exponent << " = " << power << endl;
    }
    return 0;
}