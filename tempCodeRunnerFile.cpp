#include <iostream>
#include <fstream>
using namespace std;
int main()

{

	char ch;
	ofstream aditya;
	aditya.open("test.txt");

	do
	{

		cin >> ch;
		aditya << ch;

	} while (ch != '.');

	aditya.close();
	return 0;
}