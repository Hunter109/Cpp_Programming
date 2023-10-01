#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    string address;

public:
    person(string name, int age, string address)
    {

        this->name = name;
        this->age = age;
        this->address = address;
    }
    void display()
    {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "address = " << address << endl;
    }
};
class teacher : public person
{
    string qualification;
    string department;

public:
    teacher(string n, int a, string add, string q, string d) : person(n, a, add)
    {
        qualification = q;
        department = d;
    }
    void display()
    {
        person::display();
        cout << "qualification = " << qualification << endl;
        cout << " department = " << department << endl;
    }
};
class student : public person
{
    string program;
    string semester;

public:
    student(string n, int a, string add, string p, string s) : person(n, a, add)
    {
        program = p;
        semester = s;
    }
    void display()
    {
        person::display();
        cout << "program = " << program << endl;
        cout << "semester = " << semester << endl;
    }
};

int main()
{
    teacher t1("utsav", 21, "bharatpur", "BE", "computer science");

    student s1("hunter", 28, "nepal", "c++", "second");
    s1.display();
    cout << endl;
    cout << "teacher detail" << endl;
    t1.display();
    return 0;
}