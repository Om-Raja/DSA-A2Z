// there are three types of constructor
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string name;
    string dept;
    string subject;
    long salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        cout << "This is non-parameterised constructor call";
    }
    // Parameterized constructor
    Teacher(string name, string dept, string subject, float salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor : may be default if not explicitly defined
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject =obj.subject;
        this->salary = obj.salary;
    }

    // above is also an example of constructor overloading

    //getter
    void getInfo(){
        cout << name << endl << dept << endl << subject << endl    << salary << endl;
    }
};

int main()
{
    Teacher t1("Om Raja", "CSE", "OOPs", 12342134); // parameterized constructor invoked
    Teacher t2(t1); // copy constructor invoked

    t1.getInfo();
    t2.getInfo();
    return 0;
}