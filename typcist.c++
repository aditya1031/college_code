// made by --> Aditya kumar
// date    --> 29.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;

class teacher
{
    string subject;
    string publication;

public:
    void getdataTE()
    {
        cout << "Enter the subject\n";
        cin >> subject;
        cout << "Enter the publication\n";
        cin >> publication;
    }
    void putdataTE()
    {
        cout << "subject is    " << subject << endl;
        cout << "publication is    " << publication << endl;
    }
};
class officer
{
    char grade;

public:
    void getdataOff()
    {
        cout << "Enter the Garde\n";
        cin >> grade;
    }
    void putdataOff()
    {
        cout << "Garde is    " << grade << endl;
    }
};
class typist
{
    int speed;
    float wages;

public:
    void getdataT()
    {
        cout << "Enter the speed in words per mins(wps)\n";
        cin >> speed;
        cout << "Enter the wages\n";
        cin >> wages;
    }
    void putdataT()
    {
        cout << "speed is    " << speed << "wps" << endl;
        cout << "wages is    " << wages << endl;
    }
};
class staff : public teacher, public typist, public officer
{
private:
    string code;
    string name;

public:
    void getdata()
    {
        cout << "Enter the name\n";
        cin >> name;
        cout << "Enter the code\n";
        cin >> code;
    }
    void putdata()
    {
        cout << "name is :    " << name << endl;
        cout << "code is :    " << code << endl;
    }
};

int main()
{
    staff s1;
    cout << "Enter the data of Teacher\n";
    s1.getdata();
    s1.getdataTE();
    s1.putdata();
    s1.putdataTE();
    cout << "Enter the data of the Officer\n";
    s1.getdata();
    s1.getdataOff();
    s1.putdata();
    s1.putdataOff();
    cout << "Enter the data of the typist\n";
    s1.getdata();
    s1.getdataT();
    s1.putdata();
    s1.putdataT();
}
