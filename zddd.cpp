#include <iostream>
#include <iomanip>
using namespace std;
class hunter
{
    string name;
   int roll;
    string addresss;

public:
    void get_data()
    {
        cout << "enter your name = " << endl;
        getline(cin, name);

        // getline(cin, roll);
        cout << "enter your address = " << endl;
        getline(cin, addresss);
        cout << "enter your roll = " << endl;
        cin>>roll;
    }
    void display_data()
    {
        cout << "name =" << name << endl;
        cout << "roll number = " << roll << endl;
        cout << "address =" << addresss << endl;
    }
};
int main()
{
    hunter utsav, sushant;
    // utsav.get_data();
    sushant.get_data();
    system("cls");

    // utsav.display_data();
    cout << endl;
    sushant.display_data();
    return 0;
}
