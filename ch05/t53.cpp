//프로그램5-3 정수0~n-1까지 반복문으로 출력하기
/* while반복문을 사용해서 0부터 n-1까지 출력하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    int n, count;

    cout << "출력할 정수 입력 : ";
    cin >> n;

    count = 0;
    while (count < n)
    {
        cout << count << endl;
        count++;
    }
    return 0;
}