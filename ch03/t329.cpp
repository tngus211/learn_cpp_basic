//[Lab]프로그램3-29 정수의 첫번째 자릿수 출력하기
/* 입력된 정수의 첫번째 자릿수(=일의 자리)를 추출해서 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    unsigned int givenint, firstdigit;

    cout << "양의 정수 입력 : ";
    cin >> givenint;

    firstdigit = givenint % 10;

    cout << "입력한 정수 : " << givenint << endl;
    cout << "첫번째 자릿수(일의 자리) 추출 : " << firstdigit << endl;
    return 0;
}