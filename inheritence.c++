#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "\n Enter Numbers : ";
        cin >> a;
        cin >> b;
    }
};
class B : public A
{
    
public:
int ans;

    void sol()
    {
        ans = a * b;
    }
};
class C : public A
{

public:
int sad=ans;
    //sad = ans;
    void output()
    {
        cout << "\n Answer : " << sad;
    }
};
int main()
{
    aditya a;
    a.input();
    a.sol();
    a.output();
    return 0;
}