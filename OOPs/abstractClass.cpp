//abstract class
#include <iostream>
using namespace std;

class Shape{ // abstract class
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
public:
    void draw() override{
        cout << "Drawing a circle";
    }
};

int main()
{
    Circle c;
    c.draw();    
    return 0;
}