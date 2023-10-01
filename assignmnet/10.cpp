#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    string name;
    int id;

public:
    void getdata()
    {
        cout << "enter your name : " << endl;
        cin >> name;
        cout << endl;
        cout << "enter your employee id : ";
        cin >> id;
    }
    void putdata()
    {
        cout << "employeee name : " << name << endl;
        cout << "employerr id : " << id << endl;
    }
};
class Manager : public Employee
{
    string department;

public:
    void getdata()
    {
        Employee::getdata();
        cout << "enter your department : ";
        cin >> department;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "manager department : " << department << endl;
    }
};
class ComputerOperator : public Employee
{
    string typing_speed;

public:
    void getdata()
    {
        Employee::getdata();
        cout << "enter your typing speed : " << endl;
        cin >> typing_speed;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "computer operator typing spedd : " << typing_speed << endl;
    }
};
int main()
{
    Manager hunter ;
    hunter.getdata();
    hunter.putdata();
    ComputerOperator xd;
    xd.getdata();
    xd.putdata();

    return 0;
}