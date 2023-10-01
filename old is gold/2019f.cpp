#include <iostream>
using namespace std;
class university
{
    string name;
    string location;

public:
    university(string a, string b)
    {
        name = a;
        location = b;
    }
    void display()
    {
        cout << "university name = " << name << endl;
        cout << "university location = " << location << endl;
    }
};
class afiilated_college : virtual public university
{
    string name;
    string address;
    int program;

public:
    afiilated_college(string a, string b, string c, string d, int e) : university(a, b)
    {
        name = c;
        address = d;
        program = e;
    }
    void display()
    {
        cout << "affulated college = " << name << endl;
        cout << "address of afiilated college = " << address << endl;
        cout << "total number of program = " << program << endl;
    }
};
class constituent_college : virtual public university
{
    string school;
    string dean;
    string name_program;

public:
    constituent_college(string a, string b, string f, string g, string h) : university(a, b)
    {
        school = f;
        dean = g;
        name_program = h;
    }
    void display()
    {
        cout << "nam eof school = " << school << endl;
        cout << "name of dean = " << dean << endl;
        cout << "name of program = " << name_program << endl;
    }
};
class student : public afiilated_college, public constituent_college
{
    string name;
    string program;
    int enrolled_year;

public:
    student(string a, string b, string c, string d, int e, string f, string g, string h, string i, string j, int k) : university(a, b), afiilated_college(a, b, c, d, e), constituent_college(a, b, f, g, h)
    {
        name = i;
        program = j;
        enrolled_year = k;
    }
    void display()
    {
        university::display();
        afiilated_college::display();
        constituent_college::display();
        cout << "name of studnet = " << name << endl;
        cout << "program = " << program << endl;
        cout << "enrolleld year = " << enrolled_year << endl;
    }
};
int main()
{
    student hunter("pokhara", "lekhanath", "utech", "bharatpur", 4, "sunrise", "hunter", "mater", "utsav", "computer engineerr", 2021);
    hunter.display();

    return 0;
}