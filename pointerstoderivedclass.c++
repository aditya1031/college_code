// made by --> Aditya kumar
// date    --> 2.04.2022
// UID     -->21BCS9520
#include <iostream>
#include<stdlib.h>
using namespace std;
class A
{
private:
    int a;

public:
    void getdata()
    {
        a = 2;
    }
    void show()
    {
        cout << a;
    }
};
class B : public A
{
    int b;

public:
    void getb()
    {
        b = 5;
    }
    void showb()
    {
        cout << b;
    }
};
int main()
{
    A *a1, a2;
    
    a1 = &a2;
    a1->getdata();
    a1->show();
   
}
