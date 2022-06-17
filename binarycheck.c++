// made by --> Aditya kumar
// date    --> 27.03.2022
// UID     -->21BCS9520
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void getdata();
    void checkdata();
    void ones();
};
void binary ::getdata()

{
    cout << "Enter the number" << endl;
    cin >> s;
}

void binary ::checkdata()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "ERROR YOU HAVE ENTERED A NON BINARY NUMBER" << endl;
            exit(0); // to exit the loop
        }
        else
        {

            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else if (s.at(i) == '1')
            {
                s.at(i) = '0';
            }
        }
    }
    cout << "it is a binary no." << endl;
    cout << s << endl;
}

int main()
{
    binary b1;
    b1.getdata();
    b1.checkdata();
}
