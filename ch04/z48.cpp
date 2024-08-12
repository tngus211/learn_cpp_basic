//프로그래밍 문제 4-8
//사용자로부터 점의 좌표 x,y를 입력받고, 데카르트 좌표계에서 점이 몇 사분면에 위치하는지 출력하는 프로그램
/* 해결방법
    1)x,y에 따라 다름->삼항연산자 사용하면 편할 듯
    2)x,y좌표는 0일 경우는 경계임-> 제외헤야함*/
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    
    cout << "x좌표 입력 : ";
    cin >> x;
    cout << "y좌표 입력 : ";
    cin >> y;

    if ((x == 0) || (y == 0))
    {
        cout << "경계에 위치하고 있습니다. 현재 좌표를 사분면 위에 정의할 수 없습니다." << endl;
    }
    else
    {
        if (x > 0)
        {
            switch (y > 0 ? 0 : 1)
            {
                case 1 : cout << "제 4사분면입니다." << endl;
                        break;
                case 0 : cout << "제 1사분면입니다." << endl;
                        break;
            }
        }
        else
        {
            switch (y > 0 ? 0 : 1)
            {
                case 1 : cout << "제 3사분면입니다." << endl;
                        break;
                case 0 : cout << "제 2사분면입니다." << endl;
                        break;
            }
        }
    }
    return 0;
}