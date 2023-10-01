#include <iostream>
using namespace std;
class Hunter
{
    float principal;
    float time;
    float rate;

public:
    void data()
    {
        cout << "Enter principle Amount = ";
        cin >> principal;
        cout << "enter time period = ";
        cin >> time;
    }
    void simple_intrest(float x = 8)
    {
        this->rate = x;
        float si;
        si = (principal * time * rate) / 100;
        cout << "simple intrets = " << si << endl;
    }
};
int main()
{
    Hunter h1, h2, h3;
    // data for first customers
    cout << "first customer :" << endl;
    h1.data();
    h1.simple_intrest();
    // data for second customers
    cout << "second customer :" << endl;
    h2.data();
    h2.simple_intrest();
    // data for third customers
    cout << "third customer :" << endl;
    h3.data();
    h3.simple_intrest();

    return 0;
}