//프로그램 5-8 플래그 사용하기
/* EOF와 플래그를 사용해서 반복문 종료하기*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    int num;
    bool flag;
    
    infile.open("number.dat");
    flag = false;

    while (infile >> num && !flag)
    {
        if (num >= 150)
        {
            cout << "찾는 숫자 : " << num << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "찾는 숫자가 파일에 존재하기 않습니다." << endl;
    }
    infile.close();
    return 0;
}