//프로그램5-6 EOF제어 반복문으로 숫자의 합 구하기
/* EOF제어 while반복문을 사용해 키보드로 입력한 숫자들의 합을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num;

    cout << "첫번째 숫자 입력(종료하려면 EOF 입력) : ";
    while (cin >> num)
    {
        sum = sum + num;
        cout << "다음 숫자 입력(종료하려면 EOF 입력) : ";
    }
    cout << "합 : " << sum << endl;
    return 0;
}