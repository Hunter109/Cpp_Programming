#include <iostream>
using namespace std;
class hunter
{
    static int x;

public:
    static void get(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "the value of x is " << x;
    }
};
int hunter::x = 0;
int main()
{
    hunter h1, h2;

    h1.get(9);
    h2.display();

    return 0;
}