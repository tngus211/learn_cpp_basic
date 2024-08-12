//프로그램3-25 불 자료형으로 입력하기
/* 불 자료형을 false와 true로 입력받기*/
#include <iostream>
using namespace std;
int main()
{
    bool flag;

    cout << "불 자료형을 true 또는 false로 입력 : ";
    cin >> boolalpha;

    cout << flag << endl;
    return 0;
}