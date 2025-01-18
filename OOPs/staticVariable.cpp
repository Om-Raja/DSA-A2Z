// static variable
#include <iostream>
using namespace std;

// static variable inside class
class Number
{
public:
    static int x; // can not define or initialize a static data inside class.
    // also you must define it outside of the class and function.
};

int Number::x = 50; //static class variable

void num()
{
    static int x = 0;
    x++;
    cout << x << endl;
}

int main()
{
    Number b1;
    cout << "b1.x = " << b1.x << endl;
    b1.x = 100;
    cout << "b1.x = " << b1.x << endl;

    Number b2;
    cout << "b2.x = " << b2.x << endl;
    b2.x = 200;
    cout << "b1.x = " << b1.x << endl;
    cout << "b2.x = " << b2.x << endl;

    num();
    num();
    num();
    num();

    return 0;
}