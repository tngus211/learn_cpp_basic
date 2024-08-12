//프로그램4-6 점수를 기반으로 학점 구하기
/* 여러 방향 조건 분기를 사용해서 학점을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int score;
    char grade;

    cout << "0~100점 사이의 점수 입력 : ";
    cin >> score;

    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "최종 학점 : " << grade << endl;
    return 0;
}