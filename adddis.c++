// made by adirya kumar
//date 19.03.2022
#include <iostream>
using namespace std;
class dis
{
protected:
    float dis1, dis2, sumdis;

public:
    void getdata()
    {
        cout << "enter the distance 1\n";
        cin >> dis1;
        cout << "enter the distance 2\n";
        cin >> dis2;
    }
    void putdata()
    {

        cout << "total distance is:" << dis1 + dis2;
    }
};
int main()
{
    cout<<"This program lets you add two distance in km";
    dis d1;
    d1.getdata();
    d1.putdata();

}
