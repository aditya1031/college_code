// made by --> Aditya kumar
// date    --> 19.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void take();
void copy();
char cc = 'y';
class c1
{
public:
    string name;
    int rollno;

} s;
int main()
{
    take();
    cout << "file has been created";
    copy();
}
void take()
{
    ofstream fin;
    fin.open("ad.dat", ios::out);

    while (cc == 'y')
    {

        cout << "Enter the first name\n-->";
        cin >> s.name;
        cout << "Enter the roll no.\n-->";
        cin >> s.rollno;
        cout << "Want to add more\n-->(y/n)--  ";
        cin >> cc;
        fin << s.name << " " << s.rollno << "\n";
    }
    fin.close();
}
void copy()
{
    ifstream fin;
    ofstream temp;
    fin.open("ad.dat",ios::in);
    temp.open("copydata.txt",ios::out);
    if (!fin)
    {
        cout << "No such file";
        fin.close();
    }
    else
    {
      fin >>s.name >> s.rollno;
        while (!fin.eof())
        {
           
            temp <<s.name << " " << s.rollno << "\n";
            cout<<"\nname is --"<<s.name<<endl;
            cout<<"\nrollno is --"<<s.rollno<<endl; 
            fin >>s.name >> s.rollno;
 
        }
         fin.close();   
    }
  
    temp.close();
}