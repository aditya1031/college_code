//made by aditya kumar

//date 19.03.2022
#include <iostream>
using namespace std;
int i;
class emp
{
protected:
    char name[50];
    int empno;

public:
    void getdata()
    {
        cout << "enter the name of the employee\n";
        cin >> name;
        cout << "enter the employee number\n";
        cin >> empno;
    }
    void putdata()
    {
        cout << "emplyee name : " << name << endl;
        cout << "employee number:" << empno << endl;
    }
};
int main()

{
    cout<<"this is a program  to store the employee data"<<endl;
    emp m[3];
    for ( i = 0; i < 3; i++)
    {
       m[i].getdata();
    }
    
    for ( i = 0; i < 3; i++)
    {
       m[i].putdata();
    }
    
    }