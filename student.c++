// made by --> Aditya kumar
// date    --> 21.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno,height,weight;

public:
    student(string x, int y, int z, int w) //parameterzied constructor
    {
        name = x;
        rollno = y;
        height = z;
        weight = w;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Rollno is: " << rollno << endl;
        cout << "Height is: " << height << endl;
        cout << "Weight is: " << weight << endl;
        cout << endl;
    }
    student(student &a)
    {
        cout << "Copy constuctor called:" << endl;
        name = a.name;
        rollno = a.rollno;
        height = a.height;
        weight = a.weight;
    }
    ~student()
    {
        cout << "Data is destroyed" << endl;
    }
};
int main()
{
    cout << "Name: Aditya Kumar" << endl
         << "UID: 21BCS9520" << endl;
    string name;
    int rollno;
    int height;
    int weight;
    cout << "Enter the Name: ";
    getline(cin, name);
    cout << "Enter the RollNo: ";
    cin >> rollno;
    cout << "Enter the Height(in cm): ";
    cin >> height;
    cout << "Enter the Weight(in kg): ";
    cin >> weight;
    cout <<"this is normal parameterized constructor "<< endl;
    student s1(name, rollno, height, weight);
    s1.display();
    cout << endl;
    student s2(s1);
    s2.display();
}