#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

public:
    void getdata(string x, int y)
    {
        name = x;
        age = y;
    }
    void display()
    {
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
    }
};
class student : public person
{
    int roll;

public:
    student(string x, int y, int r)
    {
        person::getdata(x, y);
        roll = r;
    }
    void display()
    {
        person::display();
        cout << "roll :" << roll << endl;
    }
};
class employe : public person
{
    int id;

public:
    employe(string x, int y, int z)
    {
        person::getdata(x, y);
        id = z;
    }
    void display()
    {
        person::display();
        cout << "id :" << id;
    }
};
int main()
{
    student s1("utsav", 21, 43);
    s1.display();
    employe e1("hunter", 28, 8127);
    e1.display();
    return 0;
}