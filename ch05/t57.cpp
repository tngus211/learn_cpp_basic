//프로그램5-7 파일의 EOF를 사용하여 숫자의 합 구하기
/* EOF 제어 while반복문을 사용해서 파일에 저장된 숫자들의 합을 구하는 프로그램*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int sum = 0;
    int num;
    ifstream infile;
    infile.open("numbers.dat");
    while (infile >> num)
    {
        sum = sum + num;
    }
    cout << "합 = " << sum << endl;
    infile.close();
    return 0;
}