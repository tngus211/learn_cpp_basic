//프로그램 5-13 유효성 검사에 do-while반복문 사용하기
/* do-while반복문을 데이터 유효성 검사에 사용하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int score;
    char grade;
    do
    {
        cout << "0~100의 범위에 있는 점수 입력 : ";
        cin >> score;
    } while (score < 0 || score > 100);

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
    }
    cout << "학점 : " << grade << endl;
    return 0;
}