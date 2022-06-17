// made by --> Aditya kumar
// date    --> 27.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;

class employee
{

private:
    string name;
    int empid;
    int salry;

public:
    static int count;
    void getdata()
    {
        cout << "Employee no. -->" << count << endl;
        cout << "Enter the name of the employee" << endl;
        cin >> name;
        cout << "Ente rthe id od the employee" << endl;
        cin >> empid;
        cout << "Enter the salry od the employee " << endl;
        cin >> salry;
        count++;
    }
    void putdata();
};
int employee::count=1;
void employee::putdata()
{
    cout << "the name of the employee" << endl;
    cout << name;
    cout << "the id od the employee" << endl;
    cout << empid;
    cout << "the salry od the employee " << endl;
    cout << salry;
}
int main()
{
   employee emp1,emp2,emp3;
   emp1.getdata();
   emp2.getdata();
   emp3.getdata();
   emp1.putdata();
   emp2.putdata();
   emp3.putdata();
   
   }
