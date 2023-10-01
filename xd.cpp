#include <iostream>
using namespace std;
class staff
{
    string name;
    string address;
    string post;

public:
    staff(string a, string b, string c)
    {
        name = a;
        address = b;
        post = c;
    }
    void displaystaff()
    {
        cout<<"staff detail"<<endl;
        cout << "  Name = " << name << endl;
        cout << "Address = " << address << endl;
        cout << "post = " << post << endl;
    }
};
class teaching : virtual public staff
{
    string name;
    string address;
    string dept;

public:
    teaching(string a, string b, string c, string d, string e, string f) : staff(a, b, c)
    {
        name = d;
        address = e;
        dept = f;
    }
    void dispalyteaching()
    {
        cout << "teaching detail " << endl;
        cout << "name " << name << endl;
        cout << " address" << address << endl;
        cout << " departmnet" << dept << endl;
    }
};
class nonteaching : virtual public staff
{
    string name;
    string address;
    string dept;

public:
    nonteaching(string a, string b, string c, string g, string h, string i) : staff(a, b, c)
    {
        name = g;
        address = h;
        dept = i;
    }
    void displaynonteaching()
    {
        cout << "non teachng detail " << endl;
        cout << "name " << name << endl;
        cout << " address" << address << endl;
        cout << " departmnet" << dept << endl;
    }
};
class admin : public teaching, public nonteaching
{
    string name;
    string address;
    string post;
    string hrs;

public:
    admin(string a, string b, string c, string d, string e, string f, string g, string h, string i,string j,string k, string l, string m) : staff(a, b, c) ,teaching(a,b,c,d,e,f),nonteaching(a,b,c,g,h,i)
    {
        name=j;
        address=k;
        post=l;
        hrs=m;
    }
    void display()
    {
        staff::displaystaff();
        teaching::dispalyteaching();
        nonteaching::displaynonteaching();
          cout << "admin  detail " << endl;
        cout << "name " << name << endl;
        cout << " address" << address << endl;
        cout << " post" << post << endl;
        cout << " hrs" << hrs << endl;
       
    }
};
int main()
{
    admin a1("utsav","bhp-7","non","saraj","fulbari","topper","paledai","baseni","gatepale","Hunter","cancer gate","2 ta back","24*7");
 a1.display();

    return 0;
}