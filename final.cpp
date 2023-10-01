#include <iostream>
#include <iomanip>
using namespace std;
class teacher
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
    void get_data1();
    void display_data1();
};
void staff ::get_data1()
{
    cout << "enter staff id = " << endl;
    getline(cin, sid);
    cout << "staff position  = " << endl;
    getline(cin, position);
}
void staff ::display_data1()
{
    cout << "staff id = " << sid << endl;
    cout << "position = " << position << endl;
}

void teacher ::get_data()
{
    cout << "enter teacher id = " << endl;
    getline(cin, tid);
    cout << "enter subject  = " << endl;
    getline(cin, subject);
}
void teacher ::display_data()
{
    cout << "teacher id = " << tid << endl;
    cout << "teacher subject = " << subject << endl;
}

int main()
{
    teacher obj1;
    obj1.get_data();
    system("cls");

    staff obj2;
    obj2.get_data1();
    system("cls");
    cout << "data of teacher" << endl;
    obj2.display_data1();
    cout << endl
         << endl;
    cout << "data of teacher" << endl;
    obj1.display_data();
    return 0;
}
