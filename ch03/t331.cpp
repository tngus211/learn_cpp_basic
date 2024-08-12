//[Lab]프로그램3-31 총합, 평균, 분산 구하기
/* 3개의 정수를 입력받고, 이를 더하고 평균을 찾은 뒤 각 숫자의 편차를 구하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1, num2, num3;
    int sum;
    double average;
    double dev1, dev2,dev3;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번째 숫자 입력 : ";
    cin >> num2;
    cout << "세번째 숫자 입력 : ";
    cin >> num3;

    sum = num1 + num2 + num3;
    average = static_cast<double>(sum) / 3;
    dev1 = num1 - average;
    dev2 = num2 - average;
    dev3 = num3 - average;

    cout << fixed << setprecision(2);
    cout << "세 숫자의 합 : " << sum << endl;
    cout << "평균 : " << average << endl;
    cout << "첫번째 숫자의 편차 : " << dev1 << endl;
    cout << "두번째 숫자의 편차 : " << dev2 << endl;
    cout << "세번째 숫자의 편차 : " << dev3 << endl;
    return 0;
}