//function overriding - virtual, override
#include <iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout << "I'm virtual functioin" << endl;
    }
};
class Derived : public Base{
public: 
    void show() override {
        // override base class function
        cout << "I'm derived class function" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    b.show();
    d.show();
    return 0;
}