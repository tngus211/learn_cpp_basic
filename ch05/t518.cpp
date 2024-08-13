//[Lab]프로그램 5-18 입력받은 숫자의 합과 곱 구하기
/* 리스트의 크기를 처음부터 정했을 때, 리스트 내부 숫자의 합과 곱을 구하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int size;
    long double number;
    long double sum, product;

    do
    {
        cout << "입력할 숫자의 수를 음수가 아닌 정수로 입력 : ";
        cin >> size;
    } while (size < 0);

     sum = 0;
     product = 1;

    for (int i = 1; i <= size; i++)
    {
        cout << "다음 숫자 입력 : ";
        cin >> number;
        sum += number;
        product *= number;
    }
    cout << fixed << setprecision(2);
    cout << "합 : " << sum << endl;
    cout << "곱 : " << product << endl;
    return 0;
}