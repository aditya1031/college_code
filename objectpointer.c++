// made by --> Aditya kumar
// date    --> 19.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class c1
{
private:
    int a, b, sum;

public:
    void getdata()
    {
        cout << "Enter the no.s";
        cin >> a >> b;
    }
    void cal()
    {
  
        sum = a + b;
    }
    void putdata()
    {
        cout << "sum is" << sum << endl;
    }
};
int main()
{
    c1 obj, *ptr;
    ptr=&obj;
    obj.getdata();

    ptr->cal();
    
    obj.putdata();
}
