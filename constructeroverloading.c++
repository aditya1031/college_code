// made by --> Aditya kumar
// date    --> 28.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;

class number
{
private:
    int num1, num2, num3, num4;

public:
    number() // contructor without arguments
    {
        cout << "first constructor called" << endl;
        cin >> num1;
    }
    number(int a) // constructor with single arguments
    {
        cout << "second constructor called" << endl;
        num2 = a;
    }
    number(int x, int y) // constructor with two arguments
    {
        cout << "third contructer called" << endl;
        num3 = x;
        num4 = y;
    }
    int add()
    {
        
        return num1 + num2 + num3 + num4;
    }
};
int main()
{
    number nu;
    number nu1();
    number nu2(3);
    number nu3(3, 4);
    cout<<nu.add();
    
}
