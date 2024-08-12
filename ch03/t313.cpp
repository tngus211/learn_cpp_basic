//프로그램3-13 복잡한 표현식의 평가
/* 우선순위가 다른 3개의 표현식 평가 순서*/
#include <iostream>
using namespace std;
int main()
{
    int result;

    result = 5 - 15 % 4;

    cout << "result에 저장된 값 : " << result << endl;
    return 0;
}