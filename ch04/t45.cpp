//프로그램4-5 두 숫자의 관계 찾기
/* 입력받은 두 숫자가 왼쪽이 더 큰지, 같은지, 더 적은지 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번째 숫자 입력 : ";
    cin >> num2;

    if (num1 >= num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " > " << num2 << endl;
        }
        else
        {
            cout << num1 << " == " << num2 << endl;
        }
    }
    else
    {
        cout << num1 << " < " << num2;
    }
    return 0;
}