//프로그래밍 문제3-10
//4개의 정수를 입력받고, 이를 기반으로 평균 점수(double)를 찾아 출력하는 프로그램 만들기
/* 해결방안
    1)4개의 정수를 입력받을 변수 필요
    2)4개의 정수 합을 받을 변수 필요
    3)평균을 double로 받아야함->static_cast<double>필요*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4, sum;
    double average;

    cout << "첫번째 숫자 입력 : ";
    cin >> num1;
    cout << "두번째 숫자 입력 : ";
    cin >> num2;
    cout << "세번째 숫자 입력 : ";
    cin >> num3;
    cout << "네번째 숫자 입력 : ";
    cin >> num4;

    sum = num1 + num2 + num3 + num4;
    average = static_cast<double>(sum) / 4;

    cout << "평균 : " << average << endl;
    return 0;
}