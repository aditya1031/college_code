// made by --> Aditya kumar
// date    --> 30.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void comp()
    {
        cout << "Enter the real part\n";
        cin >> real;
       
        cout << "Ente the img part" << endl;
        cin >> img;
    }
  friend complex operator+( complex c1,complex c2);
   /* {
        complex c3;
        c3.real = c1.real + real;
        c3.img = c1.img + img;
        return c3;
    }*/
    void putdata()
    {
        cout << real << "+i" << img << endl;
    }
};
 complex operator+(complex c1,complex c2)
{
      complex c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        return c3;
}
int main()
{
    complex com1,com2, com3;
    com1.comp();
    com2.comp();
    com1.putdata();
    com2.putdata();
    com3 = com1 + com2;  //or u can use com3=com1.opretor+(c2)
    com3.putdata();
return 0;
}
