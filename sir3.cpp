#include <iostream>
using namespace std;
class college
{
    string name;
    string address;

public:
    college(string a, string b)
    {
        name = a;
        address = b;
    }
    void displaycollege()
    {
        cout << " College Name = " << name << endl;
        cout << "Address = " << address << endl;
    }
};
class student : virtual public college
{
    string name;
    int roll;

public:
    student(string a, string b, string c, int d) : college(a, b)
    {
        name = c;
        roll = d;
    }
    void dispalystudent()
    {
        cout << "Student Name" << name << endl;
        cout << "Student roll" << roll << endl;
    }
};
class teacher : virtual public college
{
    string name;
    int id;

public:
    teacher(string a, string b, string e, int f) : college(a, b)
    {
        name = e;
        id = f;
    }
    void displayteacher()
    {
        cout << "Teacher Name = " << name << endl;
        cout << "Teacher id = " << id << endl;
    }
};
class book : public student, public teacher
{
    string books;
    string writer;
    int code;

public:
    book(string a, string b, string c, int d, string e, int f, string g, string h, int j) : college(a, b), student(a, b, c, d), teacher(a, b, e, f)
    {
        books = g;
        writer = h;
        code = j;
    }
    void displaybook()
    {
        college::displaycollege();
        student::dispalystudent();
        teacher::displayteacher();
        cout << "BOOK name = " << books << endl;
        cout << "BOOK writer = " << writer << endl;
        cout << "BOOK code = " << code << endl;
    }
};
int main()
{
    book b1("utech", "baseni", "utsav wagle", 3891, "hunter", 8127, "c++", "pagal", 43);
    b1.displaybook();

    return 0;
}