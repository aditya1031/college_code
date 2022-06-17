// made by --> Aditya kumar
// date    --> 27.03.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[200];
    string name[200];
    int prize[200];
    int counter = 1;

public:
    void getdata();
    void display();
};
void shop ::getdata()
{
    cout << "Enter the name of the item no." << counter << endl;
    cin >> name[counter];
    cout << "ENter the item id" << counter << endl;
    cin >> itemid[counter];
    cout<<"Enter the prize of the item"<<endl;
    cin>>prize[counter];
    counter++;
}
void shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "itemid is :" << itemid[i] << endl;
        cout << "Item name is:" << name[i] << endl;
    }
}
int main()
{
    shop s1;
    s1.getdata();
    s1.getdata();
    s1.getdata();
    s1.getdata();
    s1.display();
}
