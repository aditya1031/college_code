#include <iostream>

#include <conio.h>

using namespace std;

void handle(int test)

{

    try
    {

        if (test == 0)

            throw test; // throw int

        if (test == 1)

            throw 'a'; // throw char

        if (test == 2)

            throw 123.23; // throw double
    }

    catch (int i)
    { // catch an int exception

        cout << "Caught " << i << "\n";
    }

    catch (...)
    { // catch all other exceptions

        cout << "Caught one!\n";
    }
}

int main()
{

    cout << "start\n";

    handle(0);

    handle(1);

    handle(2);

    cout << "end";

    return 0;
}