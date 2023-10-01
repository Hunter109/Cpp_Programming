//  a class Teacher with data members, tid & subject and member
// functions for reading and displaying data members.
//  Create another class Staff with data members, sid & position, and
// member functions for reading and displaying for data members.
//  Derive a class Coordinator from the Teacher and Staff and the class must
// have its own data member department and member functions for reading
// and displaying data members.
//  Create two objects of the Coordinator class and read and display their
// details.

#include <iostream>
#include<iomanip>
using namespace std;
class Teacher
{
    string tid;
    string subject;

public:
    void get_data();
    void display_data();
};
class staff
{
    string sid;
    string position;

public:
    void get_data();
    void display_data();
};
class coordinator : public Teacher, public staff
{
    string department;

public:
    void get_data();
    void display_data();
};
void Teacher::get_data()
{
    cout << "enter your teacher id : ";
    cin >> tid;
    cout << "enter your subject name : ";
    cin >> subject;
}
void Teacher::display_data()
{
    cout << "teacher id : " << tid << endl;
    cout << "teacher subect : " << subject << endl;
}
void staff::get_data()
{
    cout << "enter your staff id : ";
    cin >> sid;
    cout << "enter your position : ";
    cin >> position;
}
void staff::display_data()
{
    cout << "staff if  : " << sid << endl;
    cout << "staff position  : " << position << endl;
}
void coordinator::get_data()
{
    cout << "enter your department : ";
    cin >> department;
    Teacher::get_data();
    staff::get_data();
}
void coordinator::display_data()
{
    cout << "department : " << department << endl;
    Teacher::display_data();
    staff::display_data();
}

int main()
{
    coordinator hunter1,hunter2;
    hunter1.get_data();
    system("cls");
    hunter1.display_data();
    cout<<"second data entry"<<endl;
    hunter2.get_data();
    hunter2.display_data();

    return 0;
}