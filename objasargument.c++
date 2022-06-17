// made by --> Aditya kumar
// date    --> 27.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void complexsum(complex obj1, complex obj2) //object passed as arguments
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }
    void putdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{ 
    complex c1,c2,c3;
    c1.getdata(4,5);
    c1.putdata();

    c2.getdata(3,6);
    c2.putdata();

    c3.complexsum(c1,c2); //obje c1,c2 will get add
    c3.putdata();
    
}
