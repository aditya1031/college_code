// made by --> Aditya kumar
// date    --> 29.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
int cal(int);
int cal(float);
float as;
int main()
{

    int c, x;
    while (c)
    {

        float s;
        cout << "\n\nThis a program to calculate the cude of float and integer" << endl;
        cout << "Enter the choice you want" << endl;
        cout << "1. for integer value" << endl;
        cout << "2. for float value" << endl;
        cout << "3.exit" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
        {
            cout << "Enter the integer value:" << endl;
            cin >> x;
            cout << "the cude is " << cal(x) << endl;

            break;
        }

        case 2:
        {
            cout << "Enter the float value:" << endl;
            cin >> s;
            cal(s);
            cout << "the cude is " << as << endl;
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
            break;
        }
    }
}

int cal(int x)
{
    return x * x * x;
}
int cal(float y)
{

    as = y * y * y;
}