// made by --> Aditya kumar
// date    --> 29.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class student
{
private:
    string id;
    string name;

public:
    void getdata()
    {
        cout << "Enter the student name" << endl;
        cin >> name;
        cout<<"Enter the student id"<<endl;
        cin>>id;
    }
    void putdata()
    {
        cout<<"student  name is ";
        cout<<name<<endl;
        cout << "student id is" ;
        cout<<id<<endl;
    }
};
class test : virtual public student
{
    

public:
int maths, sci, eng, com;
    void getmarks()
    {
        cout << "Enter maths marks"<<endl;
        cin >> maths;
        cout << "Eneter science marks"<<endl;
        cin >> sci;
        cout << "Enetr the English marks"<<endl;
        cin >> eng;
        cout << "Enter the computer marks"<<endl;
        cin >> com;
    }
    void putmarks()
    {
        cout << "maths:-" << maths << endl;
        cout << "science:-" << sci << endl;
        cout << "English:-" << eng << endl;
        cout << "computer:-" << com << endl;
    }
};
class sports:virtual public student
{
  
    public:
      int sport;
    void getgrade()
    {
        cout<<"Enter the garde in sports"<<endl;
        cin>>sport;
    }
    void putgrade()
    {
        cout<<"garde in spoorts is:-"<<sport<<endl;
    }
} ;
class result:public test,public sports
{
int totalmarks;
public:
void display()
{
    totalmarks=maths+sci+com+eng+sport;
    cout<<totalmarks<<endl;
}
};

int main()
{   result r1;
    r1.getdata();
    r1.putdata();
    r1.getmarks();
    r1.putmarks();
    r1.getgrade();
    r1.putgrade();
    r1.display();
    return 0 ;
}
