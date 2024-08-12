//프로그램4-11 주어진 날짜의 요일 출력하기
/* switch 조건문과 break 구문을 조합해서 요일을 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int day;

    cout << "0~6 범위의 정수 입력 : ";
    cin >> day;

    switch (day)
    {
        case 0 : cout << "일요일" << endl;
                cout << "한 주의 첫번째 요일입니다." << endl;
                break;
        case 1 : cout << "월요일" << endl;
                break;
        case 2 : cout << "화요일" << endl;
                break;
        case 3 : cout << "수요일" << endl;
                break;
        case 4 : cout << "목요일" << endl;
                break;
        case 5 : cout << "금요일" << endl;
                break;
        case 6 : cout << "토요일" << endl;
                cout << "한 주의 마지막 요일입니다." << endl;
                break;
    }
    return 0;
}