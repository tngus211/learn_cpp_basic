//프로그램4-12 점수를 기반으로 학점 출력하기
/* switch 조건을 사용해서 점수를 기반으로 학점 출력하기*/
#include <iostream>
using namespace std;
int main()
{
    int score;
    char grade;

    cout << "0~100점 사이의 점수 입력 : ";
    cin >> score;
    
    switch (score / 10)
    {
        case 10 : grade = 'A';
                break;
        case 9 : grade = 'A';
                break;
        case 8 : grade = 'B';
                break;
        case 7 : grade = 'C';
                break;
        case 6 : grade = 'D';
                break;
        default : grade = 'F';
                break;
    }

    cout << "Score : " << score << endl;
    cout << "Grade : " << grade << endl;
    return 0;
}