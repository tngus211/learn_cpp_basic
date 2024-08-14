//프로그램 6-4 정다각형의 둘레와 넓이 구하기
/* 변의 개수오아 길이를 입력받고 정다각형의 둘레와 넓이를 구하는 프로그램*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.141592653589793238462;
    int n;
    double s, peri, area;

    do
    {
        cout << "변의 개수 입력(4이상의 정수) : ";
        cin >> n;
    } while (n < 4);
    do 
    {
        cout << "변의 길이 입력 : ";
        cin >> s;
    } while (s <= 0.0);

    peri = n * s;
    area = (n * pow(s,2)) / (n * tan(PI / n));

    cout << "둘레 : " << peri << endl;
    cout << "넓이 : " << area << endl;
    return 0;
}