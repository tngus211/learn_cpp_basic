//프로그램4-7 나이 범위 확인하기
/* 자동차를 대여할 수 있는 나이 범위를 확인하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    bool eligible;

    cout << "나이 입력 : ";
    cin >> age;

    eligible = (age >= 25) && (age <= 100);

    if (eligible)
    {
        cout << "자동차를 대여할 수 있습니다." << endl;
    }
    else
    {
        cout << "죄송합니다. 자동차를 대여할 수 없습니다." << endl;
    }

    return 0;
}