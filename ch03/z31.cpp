//프로그래밍 문제 3-1,3-2,3-3
//short, unsigned int, lomg, long long, float, double 자료형의 최대,최소를 찾는 프로그램을 만드세요
/* 문제 해결방법
    1)각 자료형의 최대,최소를 받을 변수 필요
    2)최대,최소를 받아야하니까 <limits>헤더 필요*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    short smax = numeric_limits<short>::max();
    short smin = numeric_limits<short>::min();

    unsigned int unimax = numeric_limits<unsigned int>::max();
    unsigned int unimin = numeric_limits<unsigned int>::min();

    long lmax = numeric_limits<long>::max();
    long lmin = numeric_limits<long>::min();

    long long llmax = numeric_limits<long long>::max();
    long long llmin = numeric_limits<long long>::min();

    float fmax = numeric_limits<float>::max();
    float fmin = numeric_limits<float>::min();

    double dmax = numeric_limits<double>::max();
    double dmin = numeric_limits<double>::min();

    cout << "short 자료형의 최댓값 : " << smax << endl;
    cout << "short 자료형의 최솟값 : " << smin << endl;
    cout << "unsigned int 자료형의 최댓값 : " << unimax << endl;
    cout << "unsigned int 자료형의 최솟값 : " << unimin << endl;
    cout << "long 자료형의 최댓값 : " << lmax << endl;
    cout << "long 자료형의 최솟값 : " << lmin << endl;
    cout << "long long자료형의 최댓값 : " << llmax << endl;
    cout << "long long자료형의 최솟값 : " << llmin << endl;
    cout << "float자료형의 최댓값 : " << fmax << endl;
    cout << "float자료형의 최솟값 : " << fmin << endl;
    cout << "double자료형의 최댓값 : " << dmax << endl;
    cout << "double자료형의 최솟값 : " << dmin << endl;
    return 0;
}