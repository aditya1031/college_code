// made by --> Aditya kumar
// UID     -->21BCS9520
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void take();
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
}
void take()
{
    ofstream fin;
    fin.open("stu.dat", ios::app);

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