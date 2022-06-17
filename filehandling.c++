// made by --> Aditya kumar
// date    --> 19.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class c1
{
public:
    string name;
    char las_name[30];
    int rollno;

} s;
int main()
{
    // ifstream fin;
    
    ofstream fin;
    fin.open("ad.dat"t );
    cout << "Enter the first name";
    cin >> s.name;
    cout << "Enter the roll no.";
    cin >> s.rollno;
    fin << s.name << " " << s.rollno<<"\n";
    fin.close();
}
