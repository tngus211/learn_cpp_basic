//프로그래밍 문제 3-4,3-5
//int 자료형의 정수를 입력받아서 첫번째부터 세번째 자릿수를 출력하는 프로그램을 만드세요
/*해결방법
    1)정수를 입력받을 변수 필요
    2)'/'와 '%' 연산자 활용*/
#include <iostream>
using namespace std;
int main()
{
    int num, numch;
    int num1,num2,num3;
    
    cout << "정수 입력 : ";
    cin >> num;

    numch = num % 1000; //입략빋은 정수가 100의자리 이상일 수 있기 때문에
    num1 = numch / 100;
    num2 = (numch % 100) / 10;
    num3 = (numch % 100) % 10;

    cout << "입력한 값 : " << num << endl;
    cout << "첫번째 자릿수(일의 자리) : " << num3 << endl;
    cout << "두번째 자릿수(십의 자리) : " << num2 << endl;
    cout << "세번째 자릿수(백의 자리) : " << num1 << endl;
    return 0;
}