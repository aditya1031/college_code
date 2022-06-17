// made by --> Aditya kumar
// date    --> 29.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class alpha
{
private:
    int a;

public:
    alpha(int x)
    {
        a = x;
    }
    void showa()
    {
        cout << " a is :" << a << endl;
    }
};
class beta
{
private:
    float b;

public:
    beta(float y)
    {
        b = y;
    }
    void showb()
    {
        cout << " b is :" << b << endl;
    }
};
class gamma : public alpha, public beta
{
private:
    int c, d;

public:
    gamma(int m, float n, int o, int p) : alpha(m), beta(n)
    {
        c = o;
        d = p;
    }
    void showg()
    {
        cout << " c is :" << c << endl;
        cout << " d is :" << d << endl;    
    }
};
int main()
{
    gamma g(32,5.7,7,78);
    g.showa();
    g.showb();
    g.showg();
}
