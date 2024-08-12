//프로그램2-6 정수 자료형의 크기 확인하기
/* 3가지 정수 자료형의 크기를 확인하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    cout << "short int의 크기 : " << sizeof(short int) << "바이트입니다." << endl;
    cout << "int의 크기 : " << sizeof(int) << "바이트입니다. " << endl;
    cout << "long int의 크기 : " << sizeof(long int) << "바이트입니다. " << endl;
    return 0;
}