// multilevel inheritance
#include <iostream>
#include <string>
using namespace std;

class Professor
{
public:
    string name;
    string dept;
};

class Student : public Professor
{
public:
    int rollNo;
};

class GraduatedStudent : public Student
{
public:
    string researchProject;
};

int main()
{
    GraduatedStudent s1;
    s1.name = "Om Raja";
    s1.dept = "CSE";
    s1.rollNo = 197;
    s1.researchProject = "Medical website";

    cout << s1.name << endl;
    cout << s1.dept << endl;
    cout << s1.rollNo << endl;
    cout << s1.researchProject << endl;

    return 0;
}