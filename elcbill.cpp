// made by aditya kumar
// date 19.03.2022
#include <iostream>
using namespace std;
int rawbill;
  float bill;
class elcbill
{
private:
    char name[100];
    int units;

public:
    void getdata()
    {
        cout << "Enter the name of the user:\n";
        cin >> name;
        cout << "Enter the units consumed by the user in a month\n";
        cin >> units;
    }
    void calc()

    {
        int billinp;
    
        if (units < 100)
        {
            rawbill = units * 0.4;
        }
        else if (units < 200)
        {
            rawbill = units * 0.5;
        }
        else
        {
            rawbill = units * 0.6;
        }
        // new if else for minand max bill charge cut
        if (rawbill > 250)
        {
            rawbill = rawbill + (rawbill * 0.15);
        }
        else
        {
            // nothing
        }
        billinp = rawbill;
        bill = 150 + billinp;
    }

void putdata()
{
    cout<<"the name of user is: "<<name<<endl;
    cout<<bill<<endl;
}
};
int main()
{
    cout<<"Enter the credential";
    elcbill b1;
    b1.getdata();
    b1.calc();
    b1.putdata();

}
