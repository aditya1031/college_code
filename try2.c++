// made by --> Aditya kumar
// date    --> 21.04.2022
// UID     -->21BCS9520

 
/*

restricting ecception :
void test(int x)throw type()


*/

#include <iostream>
using namespace std;

int main()
{
  int a, s, x = 2;
  cout<<"Enter the no \n -->";
  cin>>x;
  try
  {
    try
    {
      if (x == 4-)
      {
        cout << "no execption";
      }
      else
      {
        throw a;
      }
    }

    catch (int s)
    {
      cout << "inner catch";
      throw;
    }
  }
catch (...)
{
  cout<<"outer catch";
}
}
