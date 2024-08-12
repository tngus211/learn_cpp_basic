//프로그램2-12 원의 면적과 둘레 구하기
/* 원의 반지름을 기반으로 둘레와 면적을 구하는 프로그램*/
#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14159;

    double radius;
    double perimeter;
    double area;

    cout << "원의 반지름 입력 : ";
    cin >> radius;

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "반지름 : " << radius << endl;
    cout << "둘레 : " << perimeter << endl;
    cout << "면적 : " << area << endl;
    return 0;
}