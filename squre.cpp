// made by --> Aditya kumar
// date    --> 22.03.2022
// UID     -->21BCS9520
#include <iostream>
#include <math.h>
using namespace std;
class square
{
    int num, num2;

public:
    getdata()
    {
        cout << "enter the numeber for squre" << endl;
        cin >> num;
        cout << "enter the number for squre root" << endl;
        cin >> num2;
    }
    cal()
    {
        cout << "square of the num is" << num * num << endl;
        cout << "square root of the number is" << sqrt(num2) << endl;
        
    }
};
int main()
{
    square s1;
    s1.getdata();
    s1.cal();
}
