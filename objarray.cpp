//made by --> Aditya kumar
//date    --> 27.03.2022
//UID     -->21BCS9520
#include <iostream>
using namespace std;
class student
{
private:
int rollno;
string name;
char grade;
float percent;

public:
static int count;
void getdata();
void putdata();

};
int student::count=1;
void student::getdata()
{
    cout<<"student no."<<count<<endl;
    cout<<"Enter the rollno. of the student"<<endl;
    cin>>rollno;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the garde of "<<endl;
    cin>>grade;
    cout<<"Enter the percent"<<endl;
    cin>>percent;

    count++;

}
void student::putdata()
{
    cout<<"student no.\t"<<count<<endl;
    cout<<"the rollno. of the student\t"<<rollno<<endl;
    cout<<"the name of the student\t"<<name<<endl;
    cout<<"the garde of \t"<<grade<<endl;
    cout<<"the percent\t"<<percent<<endl;
}
int main()
{
    student stu[20];
    int s;
    cout<<"Enter the no of student you want to enter"<<endl;
    cin>>s;
    for ( int i = 1; i<=s; i++)
    {
        cout<<"ENter the data of student no."<<i<<endl;
        stu[i].getdata();
    }
     for ( int i =1 ; i<=s; i++)
    {
        cout<<"the data of student no."<<i<<endl;
        stu[i].putdata();
    }
    
}

