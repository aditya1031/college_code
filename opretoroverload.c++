/*sizeof
:: scope resolutio
;   memeber ressource
:?  contional opretor
not posssible to overload*/
/*
syntax:
return-type opretor op(arg list)
{

}

# return-type = class name

*/

// made by --> Aditya kumar
// date    --> 30.03.2022
// UID     -->21BCS9520
  
/*#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter the number" << endl;
        cin >> x;
    }
    void putdata()
    {
        cout << x;
    }
    void operator-()
    {
        x = -x;
    }
};

int main()
{
    A a;
    a.getdata();
    a.putdata();
    cout << "\n";
    a.operator-(); // or we can use -a;
    a.putdata();
}
*/


#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter the number" << endl;
        cin >> x;
        cin>>y;
    }
    void putdata()
    {
        cout << x<<endl;
        cout<<y;
    }
    void operator-()
    {
        x=x--;
        y=y++;

    }
};

int main()
{
    A a;
    a.getdata();
    
    cout << "\n";
    a.operator-(); // or we can use -a;
    a.putdata();
}