//프로그래밍 문제 4-5 
//입력받은 학생의 점수 3개를 기반으로 학점을 구하는 프로그램을 만들기
#include <iostream>
using namespace std;
int main()
{
    int score1, score2, score3, sum;
    double average;

    cout << "첫번째 시험 점수 입력 : ";
    cin >> score1;
    cout << "두번째 시험 점수 입력 : ";
    cin >> score2;
    cout << "세번쨰 시험 점수 입력 : ";
    cin >> score3;

    sum = score1 + score2 + score3;
    average = static_cast<double>(sum) / 3;

    if (average > 90)
    {
        cout << "A 학점" << endl;
        return 0;
    }
    else if ((average <= 90) && (average > 80))
    {
        if (score3 > 90)
        {
            cout << "A 학점" << endl;
        }
        else
        {
            cout << "B 학점" << endl;
        }
    }
    else if ((average <= 80) && (average > 70))
    {
        if (score3 > 80)
        {
            cout << "B 학점" << endl;
        }
        else
        {
            cout << "C 학점" << endl;
        }
    }
    else if ((average <= 70) && (average >60))
    {
        if (score3 > 70)
        {
            cout << "C 학점" << endl;
        }
        else
        {
            cout << "D 학점" << endl;
        }
    }
    else if (average <= 60)
    {
        if (score3 > 60)
        {
            cout << "D 학점" << endl;
        }
        else
        {
            cout << "F 학점" << endl;
        }
    }
    return 0; 
}