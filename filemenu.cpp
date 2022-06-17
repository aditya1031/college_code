// made by --> Aditya kumar
// UID     -->21BCS9520
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Read();
void write();
void app();
void mod();
char cc = 'y';

class
{
public:
    string name;
    int age;
    int rollno;
} s;

int main()
{
    int ch;
    cout << "\nchoose the folling option\n";
    cout << "1.> write \n";
    cout << "2.> Read  \n";
    cout << "3.> app   \n";
    cout << "4.> modify   \n";
    cout << "5.> exit   \n";
    cout << "Enter the choice\n-->";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        cout << "\n new file created\n";
        write();
        break;
    }
    case 2:
    {
        cout << "\nreading the file student\n";
        Read();
        break;
    }
    case 3:
    {
        cout << "\n old file opened\n";
        app();
        break;
    }
    case 4:
    {
        cout << "\n file open for modification\n";
        mod();
        break;
    }
    case 5:
    {
        exit(0);
    }
    default:
        break;
    }
}

void write()
{
    ofstream stuin;
    stuin.open("stud.txt", ios::out);

    while (cc == 'y')
    {

        cout << "Enter the first name\n-->";
        cin >> s.name;
        cout << "Enter the roll no.\n-->";
        cin >> s.rollno;
        cout << "Enter the Age\n-->";
        cin >> s.age;
        cout << "Want to add more\n-->(y/n)--  ";
        cin >> cc;
        stuin << s.name << " " << s.rollno << " " << s.age << "\n";
    }
    stuin.close();
    main();
}

void Read()
{
    ifstream stuout;
    stuout.open("stud.txt", ios::in);

    stuout >> s.name >> s.rollno >> s.age;
    while (!stuout.eof())
    {
        cout << "\n--------------------------------------\n";
        cout << "\n     name is   -- " << s.name;
        cout << "\n     rollno is -- " << s.rollno;
        cout << "\n     Age is    -- " << s.age;
        stuout >> s.name >> s.rollno;
        cout << "\n--------------------------------------\n";
    }
    stuout.close();
    main();
}

void app()
{
    ofstream stuin;
    stuin.open("stud.txt", ios::app);

    while (cc == 'y')
    {

        cout << "Enter the first name\n-->";
        cin >> s.name;
        cout << "Enter the roll no.\n-->";
        cin >> s.rollno;
        cout << "Enter the Age\n-->";
        cin >> s.age;
        cout << "Want to add more\n-->(y/n)--  ";
        cin >> cc;
        stuin << s.name << " " << s.rollno << " " << s.age << "\n";
    }
    stuin.close();
    main();
}

void mod()
{
    string s;
    ofstream stumod;
    stumod.open("stud.txt",ios::ate|ios::out); 
    cout<<stumod.tellp();

    stumod.seekp(-20);
    cout<<stumod.tellp();
    stumod.clear();
   cin>>s;
    stumod<<s;
    stumod.close();
}
