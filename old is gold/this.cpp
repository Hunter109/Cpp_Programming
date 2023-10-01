#include <iostream>
using namespace std;
class hunter
{
    int x;

public:
    hunter() {}
    hunter(int x)
    {
        this->x = x;
    }
    hunter sum(hunter &a)
    {
        x += a.x;
        return *this;
    }
    void display()
    {
        cout << "the sum value of number is " << x << endl;
    }
};
int main()
{
    hunter xd(10), xe(10), a;
    a = xd.sum(xe);
    a.display();
    return 0;
}