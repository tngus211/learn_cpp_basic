//프로그램 2-10 이스케이프 문자 확인하기
/* 이스케이프 문자를 사용하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello\n";  // \n = endl
    cout << "Ho\t friends." << endl; // \t = tab키
    cout << "Buenos dias  \bamigos." << endl; // \b는 이전 글자를 삭제(띄어쓰기 1개 삭제)
    cout << "Hello\rBonjour mes amis." << endl; // \r은 줄의 앞부분으로 커서를 옮기고 다시 입력(따라서 앞의 내용 삭제)
    cout << "This is a single quote\'." << endl; // \'은 작은 따옴표 출력
    cout << "This is a double quote\"." << endl; // \"은 큰 따옴표 출력
    cout << "This is how to print a backslash\\." << endl; // \\은 역 슬래시 출력
    return 0;
}