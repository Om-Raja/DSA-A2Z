#include <iostream>
#include <string>
using namespace std;

// creating class for a teacher
class teacher
{
private:
    float salary;

public:
    string name;
    string dept;
    string subject;

    // getter
    void getSalary()
    {
        cout << salary;
    }

    // setter
    void setSalary(float slr)
    {
        salary = slr;
    }
};

int main()
{
    teacher t1;
    t1.name = "Om Raja";
    t1.dept = "CSE";
    t1.subject = "OOPs";
    t1.setSalary(234324.123);
    cout << "Salary is ";
    t1.getSalary();
    cout << endl;
    cout << "name is " << t1.name << "\tDept is " << t1.dept << "\tSubject is " << t1.subject << endl;
    return 0;
}