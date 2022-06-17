#include<iostream>
#include<iomanip> //for set width of the the no. 
using namespace std;
int main()
{ const int a=6; //constant variable
    float  num=67;
    float &h=num; //refrencevariable
    cout<<(int)num; //typecasting
    cout<<h;
    //a=5; error
    cout<<"the set w" <<setw(5)<<124<<endl;
    cout<<"the set w "<<setw(5)<<12<<endl;
    cout<<"the set w "<<setw(5)<<12224<<endl;
    cout<<"the set w "<<setw(5)<<4232<<endl;
}
