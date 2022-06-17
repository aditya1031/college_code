// made by --> Aditya kumar
// date    --> 29.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class A
{


public:
string name;
    void getdata()
    {
        cout << "Enter the name" << endl;
        cin>>name;
    }
   
};
class B : virtual public A
{

public:
    int age;
    void put1()
    {
        cout << "Enter the age";
        cin >> age;
       
    }
};
class C : virtual public A
{

public:
    string cl;
    void put2()
    {
        cout << "Entee the class";
        cin >> cl;
        cout << name;
    }
};
class D : public C, public B
{

public:
    void display()
    {
        cout << "name is  :" << name << endl;
        cout << "age is   :" << age << endl;
        cout << "class is :" << cl << endl;
    }
};

int main()
{
    D r1;
    r1.getdata();
    r1.put1();
    r1.put2();
    r1.display();
    return 0;
}
