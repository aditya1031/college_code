// made by --> Aditya kumar
// date    --> 19.04.2022
// UID     -->21BCS9520
#include <iostream>
using namespace std;

class student

{

public:
	int marks;

	void disp()

	{

		cout << "its base class";
	}
};

class topper : public student

{

public:
	void disp()

	{

		cout << "Its derived class";
	}

};

int main()
{
	student s;
	topper t;

	s.disp();

	t.disp();
}
