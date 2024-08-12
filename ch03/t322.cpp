//프로그램3-22 정수를 여러 진법으로 출력할 수 있게 하는 조정자
/* 정수를 여러 진법(10진법, 8진법, 16진법)으로 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int x = 1237;
    //showbase 없이 x값 출력
    cout << "x의 10진수 값 : " << x << endl;
    cout << "x의 8진수 값 : " << oct << endl;
    cout << "x의 16진수 값 : " << hex << endl << endl;
    //showbase를 사용한 x값 출력
    cout << "x의 10진수 값 : " << showbase << x << endl; //10진수는 출력결과에 변화없음
    cout << "x의 8진수 값 : " << showbase << oct << x << endl; //0으로 시작하는 숫자는 8진수
    cout << "x의 16진수 값 : " << showbase << hex << x << endl; //0x로 시작하는 숫자는 16진수
    return 0;
}