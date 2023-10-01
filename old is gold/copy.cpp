#include <iostream>
using namespace std;
class Employee
{
    int code;
    string name;
    string address;
    int salary;

public:
    Employee(int c, string n, string add, int s)
    {
        code = c;
        name = n;
        address = add;
        salary = s;
    }
    Employee(Employee &u)
    {
        code = u.code;
        name = u.name;
        address = u.address;
        salary = u.salary;
    }
    void display()
    {
        cout << "name = " << name << endl;
        cout << "code = " << code << endl;
        cout << "address = " << address << endl;
        cout << "salary = " << salary << endl;
    }
};
int main()
{
    Employee a(8127, "hunter", "nepal", 5000);
    a.display();
    Employee b(a);
    b.display();

    return 0;
}