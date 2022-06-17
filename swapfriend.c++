// made by --> Aditya kumar
// date    --> 19.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class c2;
class c1
{
private:
    int a;

        public :
         friend swap(c1 &, c2 &); //& is used as a refrence for object to change the value in its variable 
    void getdata()
    {
        cout << "Enter the number\n";
        cin >> a;
         cout << "first number = " << a << endl;
    }
    void putdata()
    {
       

        cout << "first after the swap = " << a << endl;
    }
};
class c2
{
    int b;

public:
    void getdata2()
    {
        cout << "\nENter the second number\n";
        cin >> b;
        cout << "second number = " << b << endl;
    }
    void putdata2()
    {
        
        cout << "second after the swap = " << b << endl;
    }
    friend swap(c1 &, c2 &);
};
swap (c1&x,c2&y) 
{
    int temp;
    temp=x.a;
    x.a=y.b;
    y.b=temp;

}
int main()
{
c1 obj;
c2 ob;
obj.getdata();
ob.getdata2();

swap(obj,ob);
obj.putdata();
ob.putdata2();

}
