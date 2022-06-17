#include <iostream>
using namespace std;
class student
{
protected:
    char name[100];

public:
    void take()
    {
        cout << "enter the name of the student";
        cin >> name;
    }
};
class test
{
protected:
    float eng, maths, sci;

public:
    void take()
    {
        cout << "Enter the marks of student\n";
        cout << " eng\n";
        cin >> eng;
        cout << "Maths\n";
        cin >> maths;
        cout << "sci\n";
        cin >> sci;
    }
};
class sports
{
protected:
    float sport;

public:
    void take()
    {
        cout << "Enter the sport marks\n";
        cin >> sport;
    }
};
class result:public student,public test,public sports;
{

}

