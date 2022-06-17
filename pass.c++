//made by --> Aditya kumar
//date    --> 19.03.2022
//UID     -->21BCS9520
#include <iostream>
using namespace std;

int main()
{
    string staffid;
    string pass;
    cout << "\n\n\n";
    cout << "---------------------------------------------";
    cout << "\n  Enter the id \n";
    cout << "-->";
    getline (cin,staffid);
    cout << "\n  enter the Password \n";
    cout << "-->";
    getline(cin,pass);
    
  if (staffid =="Aditya1031")
    {
        if (pass == "Tannu")
        {
           // administrator();
        }
    }
    else
    {
        cout<<"wrong input!!!!!!!";
    } 
}

