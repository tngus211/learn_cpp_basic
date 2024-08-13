//프로그램 5-17 소수인지 확인하는 프로그램
/* 소수를 찾았을 때, return 구문을 실행하는 프로그램
    어떤 숫자가 1인지 또는 복합수인지 확인하면 곧바로 main함수르르 벗어남*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    
    do
    {
        cout << "양의 정수 입력 : ";
        cin >> num;
    } while (num <= 0);

    if (num == 1)
    {
        cout << "1은 소수도 합성수도 아닙니다." << endl;
        return 0;
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << "은/는 합성수입니다." << endl;
            cout << i << "로/으로 나누어집니다." << endl;
            return 0;
        }
    }
    cout << num << "은/는 소수입니다." << endl;
    return 0;
}