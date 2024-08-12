//프로그램 4-3 성적을 기반으로 합격/불합격 확인하기
/* if-else 조건문을 사용해서 학점 찾기*/
#include <iostream>
using namespace std;
int main()
{
    int score;

    cout << "0~100점 사이의 점수를 입력하세요 : ";
    cin >> score;

    if (score >= 70)
    {
        cout << "pass입니다." << endl;
    }
    else
    {
        cout << "fail입니다." << endl;
    }
    return 0;
}