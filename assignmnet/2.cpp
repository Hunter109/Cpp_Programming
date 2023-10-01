#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
class Hunter
{
    string name;
    string account_number;
    string account_type;
    float balance;

public:
    Hunter()
    {
        
        balance=0;
    }

    void get_data();
    void deposit();
    void withdraw();
    void display_data();
};
void Hunter::get_data()
{
    cout << "enter acount holder name = " << endl;
    getline(cin, name);
    cout << "enter acount number =" << endl;
    getline(cin, account_number);
    cout << "enter acount type =" << endl;
    getline(cin, account_type);
}

void Hunter::deposit()
{
    cout << "enter the money you want to deposit in number" << endl;
    cin >> balance;
}
void Hunter::withdraw()
{
    string xd;
    float withdraw1;
recheck:

    cout << "to withdraw let me check your balance for that enter acount number" << endl;
    cin >> xd;
    if (xd == this->account_number)
    {
        cout << "you total balance = " << balance << endl;
        cout << "how much you want to withdraw" << endl;
        cin >> withdraw1;
        cout << "sucessfully deducted " << withdraw1 << "from your acount" << endl;

        balance -= withdraw1;
    }
    else
    {
        cout << "you enter wrong detail " << endl;
        cout << "so we redirect you to last page" << endl;
        goto recheck;
    }
}
void Hunter::display_data()
{
    cout << "after withdraw " << endl;
    cout << "acount holder name = " << name << endl;
    cout << "balance = " << balance;
}
int main()
{
    Hunter h1;
    h1.get_data();
    h1.deposit();
    h1.withdraw();
    h1.display_data();

    return 0;
}