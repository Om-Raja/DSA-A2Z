#include <iostream>
#include <string>
using namespace std;

class Teacher
{
protected:
    string name;
    string subject;
    string dept;
    double salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        cout << "I'm constructor of parent class\n";
    }
    // parameterized constructor
    Teacher(string name, string subject, string dept, double salary)
    {
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }
    ~Teacher()
    {
        cout << "I'm destructor of parent class\n";
    }
};

// child class
class Student : public Teacher
{
private:
    int rollNo;

public:
    Student()
    {
        cout << "I'm constructor of child class\n";
    }
    Student(int rollNo, string name, string dept)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->dept = dept;
    }
    ~Student()
    {
        cout << "I'm destructor of child class\n";
    }
    // getter
    void getInfo()
    {
        cout << rollNo << endl;
        cout << name << endl;
        cout << dept << endl;
    }
};

// constructor of parent class is called first, and destructor of child class is called first;

int main()
{
    Student s1(1234, "Om Raja", "CSE");
    s1.getInfo();
    return 0;
}