//프로그램2-13 string틀래스 사용하기
/* 이름, 이니셜, 성을 입력받고 결합해서 출력하는 프로그램*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullname;

    cout << "이름(first name) 입력 : ";
    cin >> first;
    cout << "이니셜(initial) 입력 : ";
    cin >> initial;
    cout << "성(last name) 입력 : ";
    cin >> last;

    fullname = first + space + initial + dot + space + last;

    cout << "전체 이름(full name) : " << fullname << endl;
    return 0;
}