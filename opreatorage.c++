// made by --> Aditya kumar
// date    --> 07.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void getdata()
    {
        cout << "Enter the name of the person ";
        cin >> name;
        cout << "Enter the age of the person ";
        cin >> age;
    }
    void putdata()
    {
        cout << "The name of the person  ->" << name << endl;
        cout << "The age of the person  ->" << age << endl;
    }
    void operator>(person b)
    {       
        person a;
        if (a.age > b.age)
        {
            cout << a.name << " has is the eldest one" << endl;
        }
        else
        {
            cout << b.name << " is the eldest one " <<endl;
        }
    }
    friend person operator>(person a ,person b);
};
person  operator>(person a,person b)
    {
       if (a.age > b.age)
        {
            cout << a.name << " has is the eldest one" << endl;
        }
        else
        {
            cout << b.name << " is the eldest one " <<endl;
        }
    }

int main()
{
    person p1, p2;
    p1.getdata();
    p2.getdata();
    cout << "DATA OF THE PERSONS ARE :" << endl;
    p1.putdata();
    p2.putdata();
    p1.operator>(p2);
    p2.operator>>(p1,p2);
    
}


















