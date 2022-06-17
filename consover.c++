// made by --> Aditya kumar
// date    --> 21.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class Area
{
public:
    int r;
    Area()
    {
        r= 2;
       
        cout << "Name: aditya Kumar " << endl
             << "UID: 21BCS9520" << endl;
        cout << "Simple Constructor called. " << endl;
    }
    Area(int x)
    {
        r = x;
       
        cout << "Parameterised Constructor called. " << endl;
    }
    ~Area()
    {
        cout << "Destructor called. " << endl;
    }
    void arecal();
};
void Area::arecal()
{
    cout << "Area of circle is " << 2*3.14*r << endl;
}
int main()
{
    int r;
    Area A1;
    A1.arecal();
    cout << endl;
    cout << "Enter Radius for parameterised constructor:\n";
    cin >> r;
    Area A2(r);
    A2.arecal();
    return 0;
}