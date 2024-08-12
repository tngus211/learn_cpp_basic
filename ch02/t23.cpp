//프로그램 2-3 두 숫자를 더하는 프로그램
/*키보드로부터 2개의 숫자 값을 입력받은 뒤에 두 값을 더한 후 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int sum;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번째 숫자 입력 : ";
    cin >> num2;

    sum = num1 + num2;

    cout << "두 숫자의 합 : " << sum << endl;
    return 0;
}