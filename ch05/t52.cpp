//프로그램5-2 while반복문으로 특정 수만큼 반복하기
/* 카운터 제어 while반복문을 사용해서 학생의 점수의 평균을 구하는 프로그램*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int score;
    int sum = 0;
    int counter = 0;
    double average;

    while (counter < 4)
    {
        cout << "점수를 하나 입력하세요 : ";
        cin >> score;
        sum = sum + score;
        counter++;
    }
    average = static_cast<double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "평균 점수 : " << average << endl;
    return 0;
}