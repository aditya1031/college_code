// made by --> Aditya kumar
// date    --> 3.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void get()
    {
        x = 0;
    }
    void get(int r)
    {
        x = r;
    }

    void put()
    {
        cout << x << endl;
    }
    void operator--() // declaration of unary operator
    {
        x = ++x;
    }
    void operator--(int) // declaration of unary operator
    {
        x = x++;
    }
};
int main()
{
    A a;
    a.get(3);
    cout << "21BCS9520 \t ADITYA KUMAR" << endl;
    a.put();
    --a; // ivoking the function using object
    a.put();
    a--;
    a.put();
    return 0;
}