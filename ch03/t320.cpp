//프로그램3-20 double자료형의 오버플로우와 언더 플로우
/* double자료형의 오버플로우와 언더플로우 확인하기*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::min();

    cout << "double의 최댓값 : " << num1 << endl;
    cout << "double의 최솟값 : " << num2 << endl;

    num1 *= 1000.00;
    num2 *= 1000.00;

    cout << "오버플로우가 일어난 num1 * 1000의 값 : " << num1 << endl;
    cout << "언더플로우가 일어난 num2 * 1000의 값 : " << num2 << endl;
    return 0;
}