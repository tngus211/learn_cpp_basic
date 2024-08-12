//프로그래밍 문제 4-3
//사용자로부터 1~12사이의 숫자를 입력받고 해당 월을 
//January, February,...,December와 같은 형태의 영어로 출력하는 프로그램 만들기
/* 해결방법
    1)월을 입력받을 변수 필요
    2)월은 1`12까지니까 switch문이 조금더 효율적일듯
      -> 사용자가 13이상의 수를 넣을수 있으니 if-else도 필요할듯
    3)해댱 월에 도착하는 순간 switch문은 종료되야함->break*/
#include <iostream>
using namespace std;
int main()
{
    int month;

    cout << "몇 월인지 입력 : ";
    cin >> month;

    if ((month > 0) && (month <13))
    {
        switch (month)
        {   
            case 12 : cout << "December" << endl;
                        break;
            case 11 : cout << "November" << endl;
                        break;
            case 10 : cout << "October" << endl;
                        break;
            case 9 : cout << "September" << endl;
                        break;
            case 8 : cout << "August" << endl;
                        break;
            case 7 : cout << "July" << endl;
                        break;
            case 6 : cout << "June" << endl;
                        break;   
            case 5 : cout << "May" << endl;
                        break;
            case 4 : cout << "April" << endl;
                        break;
            case 3 : cout << "Merch" << endl;
                        break;
            case 2 : cout << "February" << endl;
                        break;
            case 1 : cout << "January" << endl;
                        break;
        }
    }
    else
    {
        cout << "잘못된 입력입니다. " << endl;
    }
    return 0;
}