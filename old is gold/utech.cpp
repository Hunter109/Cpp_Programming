#include <iostream>
using namespace std;
class account
{
    string name;
    string acountnumber;
    string acounttype;
    string balance;

public:
    account() {}
    void getdata()
    {
        cout << "enter your name" << endl;
        cin >> name;
        cout << "enter your acount number " << endl;
        cin >> acountnumber;
        cout << "enter your account type " << endl;
        cin >> acounttype;
        cout << "enter your balanace " << balance << endl;
        cin >> balance;
    }
    void display()
    {
        cout << " your name" << name << endl;
        cout << " your acount number " << acountnumber << endl;
        cout << " your account type " << acounttype << endl;
        cout << " your balanace " << balance << endl;
    }
    int operator>(account u)
    {
       // < sano
       // > thulo
        if (balance > u.balance)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    account hunter[1000];
    for (int i = 0; i < 1000; i++)
    {
        hunter[i].getdata();
    }
    int min = 0;

    for (int i = 1; i < 1000; i++)
    {
        int answer = hunter[i] > hunter[min];
        if (answer == 1)
        {
            min = i;
        }
    }
    cout << "detail of lowest balance value" << endl;
    hunter[min].display();

    return 0;
}