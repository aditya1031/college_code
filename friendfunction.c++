#include <iostream>
using namespace std;
class ClassB; // forword declartion
class ClassA
{
public:
    ClassA() : numA(12) {}

private:
    int numA;

    friend add(ClassA, ClassB);
};

class ClassB
{

public:
    ClassB() : numB(1) {}

private:
    int numB;

    friend add(ClassA, ClassB);
};

add(ClassA objectA, ClassB objectB)
{
    return (objectA.numA + objectB.numB);
}

int main()
{
    ClassA a;
    ClassB b;
    cout << add(a, b);
}