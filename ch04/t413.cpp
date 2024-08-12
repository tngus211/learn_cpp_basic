//프로그램4-13 학점을 기반으로 pass/fail 출력하기
/* switch 조던문을 사용해서 pass/fail 학점 찾기*/
#include <iostream>
using namespace std;
int main()
{
    char grade;

    cout << "학점을 입력(A,B,C,D,F) : ";
    cin >> grade;

    switch (grade)
    {
        case 'A' :
        case 'B' :
        case 'C' : cout << "pass입니다." << endl;
                    break;
        case 'D' :
        case 'F' : cout << "fail입니다." << endl;
                    break;
    }
    return 0;
}