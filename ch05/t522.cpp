//[Lab]프로그램 5-22 리스트에 있는 항목이 기준을 만족하는지 확인하기
/* 리스트 내부에 있는 요소 중 적어도 하나가 7로 나눌 수 있는지 확인하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    bool success = false;
    int size;
    int item;

    do 
    {
        cout << "리스트의 크기 입력 : ";
        cin >> size;
    } while (size < 0);

    for (int i = 0; (i < size) && (!success); i++)
    {
        cout << "다음 숫자 입력 : ";
        cin >> item;
        success = (item % 7 == 0);
    }

    if (success)
    {
        cout << item << "은/는 7로 나눌 수 있습니다." << endl;
    }
    else
    {
        cout << "리스트 내부에 7로 나눌 수 있는 숫자가 없습니다." << endl;
    }
    return 0;
}