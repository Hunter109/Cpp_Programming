#include <iostream>
using namespace std;
class Account
{
    string name[1000];
    string Account_number[1000];
    string Account_type[1000];
    int balance[1000];

public:
    void get_date()
    {
        for (int i = 0; i < 1000; i++)
        {

            cout << "enter your name " << endl;
            cin >> name[i];
            cout << "enter your acount nmber" << endl;
            cin >> Account_number[i];
            cout << " enter your account type" << endl;
            cin >> Account_type[i];

            cout << "enter your balance " << endl;
            cin >> balance[i];
        }
    }
    void display_data(int a)
    {

        cout << "Acount holder name " << name[a] << endl;
        cout << "Account number " << Account_number[a] << endl;
        cout << "Acccount type " << Account_type[a] << endl;
        cout << "balaance " << balance[a] << endl;
    }
    void operator<(Account xd)
    {

        int minimum = xd.balance[0];
        int min = 0;

        for (int i = 1; i < 1000; i++)
        {
            if (xd.balance[i] < minimum)
            {
                minimum = xd.balance[i];
                min = i;
            }
        }
        cout << "lowest balance among 1000 user detail " << endl;
        display_data(min);
    }
};
int main()
{
    Account xd;
    xd.get_date();
    xd < xd;

    return 0;
}