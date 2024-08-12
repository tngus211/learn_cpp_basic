//프로그램4-4 두 숫자 중에서 큰 숫자 찾기
/* if-else 조건문을 사용해서 입력받은 더 큰 숫자 또는 숫자가 같을 경우 첫번째 숫자를 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int large;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번쨰 숫자 입력 : ";
    cin >> num2;

    if (num1 >= num2)
    {
        large = num1;
    }
    else
    {
        large = num2;
    }
    
    cout << "더 큰 숫자 : " << large << endl;
    return 0;
}