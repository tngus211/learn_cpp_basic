//[Lab]프로그럄4-15 점수 입력을 기반으로 학생의 성적 찾기
/* 학생 점수를 3개 입력받고 최솟값과 최댓값을 기반으로 평균을 구해서 학생의 성적을 찾는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int score1, score2, score3, maxscore, minscore, score;

    cout << "첫번쨰 점수 입력 : ";
    cin >> score1;
    cout << "두번째 점수 입력 : ";
    cin >> score2;
    cout << "세번째 점수 입력 : ";
    cin >> score3;

    if ((score1 > score2) && (score1 > score3))
    {
        maxscore = score1;
    }
    else if ((score2 > score1) && (score2 > score3))
    {
        maxscore = score2;
    }
    else
    {
        maxscore = score3;
    }

    if ((score1 < score2) && (score1 < score3))
    {
        minscore = score1;
    }
    else if ((score2 < score1) && (score2 < score3))
    {
        minscore = score2;
    }
    else
    {
        minscore = score3;
    }

    int temp = maxscore + minscore;
    
    if (temp % 2 == 1)
    {
        temp += 1;
    }
    score = temp / 2;

    cout << "입력한 점수 : " << score1 << "  " << score2 << "  " << score3 << endl;
    cout << "최소 점수와 최대 점수 : " << minscore << "  " << maxscore << endl;
    cout << "학생 성적 : " << score << endl;
    return 0;
}