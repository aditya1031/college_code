// made by --> Aditya kumar
// date    --> 27.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class c1
{
private:
    int a, b, c;
    

public:
int d;
    void getdata();
    void putdata()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
    }
};
void c1::getdata()
{
    cin>>a>>b>>c;
}
int main()
{
    c1 obj;
    obj.d=45;
    obj.getdata();
    obj.putdata();
   
}
