//[Lab]프로그램 5-21 리스트 내부에서 최솟값과 최댓값 찾기
/* 정수 리스트의 크기를 미리 알고 있을 때, 정수 리스트 내부의 최솟값과 최댓값을 구하는 프로그램*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int size;
    int number, smallest, largest;

    smallest = numeric_limits<int>::min();
    largest = numeric_limits<int>::max();

    do 
    {
        cout << "음수가 아닌 수로 리스트의 크기 입력 : ";
        cin >> size;
    } while (size <= 0);

    for (int i = 1; i <= size; i++)
    {
        cout << "다음 숫자 입력 : ";
        cin >> number;
        if (number < smallest)
        {
            smallest = number;
        }
        if (number > largest)
        {
            largest = number;
        }
    }
    cout << "최솟값 : " << smallest << endl;
    cout << "최댓값 : " << largest << endl;
    return 0;
}