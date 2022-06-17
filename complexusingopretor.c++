// made by --> Aditya kumar
// date    --> 3.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class complex
{

    int real;
    int img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }

    friend complex operator+(complex, complex);
    void display();
};
void complex ::display()
{
    cout << "the complex num. are\t" << real << "+" << img << "i" << endl;
}
complex operator+(complex a, complex b) // object adding
{
    complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}
int main()
{
    complex A(9, 7);
    complex B(6, 2);
    complex C;
    C = A + B;
    cout << "21BCS9520 \t ADITYA KUMAR" << endl;
    A.display();
    B.display();
    C.display();
    return 0;
}