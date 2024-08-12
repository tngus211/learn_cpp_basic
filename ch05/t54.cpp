//프로그램5-4 while반복문으로 수열의 합 구하기
/* while 반복문으로 수열의 합 구하기*/
#include <iostream>
using namespace std;
int main()
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n;

    cout << "n의 값 입력 : ";
    cin >> n;

    int counter = 1;
    while (counter <= n)
    {
        sum1 += counter;
        sum2 += counter * counter;
        sum3 += counter * counter * counter;
        counter++;
    }
    cout << "n의 값 : " << n << endl;
    cout << "sum1의 값 : " << sum1 << endl;
    cout << "sum2의 값 : " << sum2 << endl;
    cout << "sum3의 값 : " << sum3 << endl;
    return 0;
}