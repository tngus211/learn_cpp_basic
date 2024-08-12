//프로그램3-27 3개의 숫자를 입력받고 합계를 수해서 출력하기
/* 3개의 정수를 더하고 결과를 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int first, second, third, sum;

    cout << "첫번째 숫자 입력 : ";
    cin >> first;
    
    cout << "두번쨰 숫자 입력 : ";
    cin >> second;

    cout << "세번째 숫자 입력 : ";
    cin >> third;

    sum = first + second + third;

    cout << "세 숫자의 합 : " << sum << endl;
    return 0;
}