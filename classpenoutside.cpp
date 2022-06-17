// made by --> Aditya kumar
// date    --> 22.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;

class pen
{
    string comname;
    int prize;
    char type[20];

public:
    pendata();
    putdata();
};

pen::pendata()
{
    cout << "enter the name of company" << endl;
    cin >> comname;
    cout << "Enter the type of pen" << endl;
    cin >> type;
    cout << "Enter the prize" << endl;
    cin >> prize;
}
pen::putdata()
{
    cout << "company of pen is\t" << comname << endl;
    cout << "Type of pen is\t" << type << endl;
    cout << " the prize of is \t " << prize << endl;
}
int main()
{
    pen p1;

    p1.pendata();
    p1.putdata();
}
