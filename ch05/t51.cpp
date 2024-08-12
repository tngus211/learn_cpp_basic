//프로그램5-1 while 반복문으로 특정 수만큼 반복하기
/* while 반복문을 사용해서 메시지를 10회 출력하기*/
#include <iostream>
using namespace std;
int main()
{
    int counter = 0;
    while (counter < 10)
    {
        cout << "Hello, world" << endl;
        counter++;
    }
    return 0;
}