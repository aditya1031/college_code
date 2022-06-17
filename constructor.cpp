#include <iostream>
using namespace std;
class area
{
private:
  int breath, length;

public:
  area()
  {
    cout << "Enter the length" << endl;
    cin >> length >> breath;
    cout << "area = " << length * breath << endl;
  }
};

int main()
{
  area rec1;
  return 0;
}