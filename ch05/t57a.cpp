//프로그램5-7 파일의 EOF를 사용하여 숫자의 합 구하기
/* 코드 수정->책과 다름*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string filename = "number.dat";

    ofstream outfile;
    outfile.open(filename);
    outfile << "100, 200, 300, 400, 500";
    outfile.close();
    cout << "number.dat 파일이 생성되었습니다." << endl;

    int sum = 0;
    int num;
    char ch;
    ifstream infile;
    infile.open("number.dat");
    while (infile >> num)
    {
        sum = sum + num;
        //infile >> ch;
    }
    infile.close();
    cout << "합 : " << sum << endl;
    return 0;
}