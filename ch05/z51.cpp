//프로그래밍 문제 5-1
//사용자로부터 패턴의 종류(1~4)와 크기(1~9)를 입력받고 패턴을 출력하는 프로그램 만들기
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int pt, size;

    do 
    {
        cout << "패턴의 종류(1~4) 입력 : ";
        cin >> pt;
    } while(pt < 0 || pt > 4);

    cout << "크기 입력 : ";
    cin >> size;

    switch(pt)
    {
        case 4 : 
                for (int star = 0; star < size + 1; star++)
                {
                    cout << "*";
                    for (int edl = 0; edl == star; edl++)
                    {
                        cout << endl;
                    }
                }
                break; 
        case 3 :
                break;
        case 2 :
                break;
        case 1 :
                break;
    }
}