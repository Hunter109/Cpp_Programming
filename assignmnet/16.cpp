#include <iostream>
using namespace std;

class xd;
class Hunter
{
    int x;

public:
    Hunter(int a)
    {
        x = a;
    }
    friend void swap(Hunter &, xd &);
    friend void after_swap(Hunter, xd);
    friend void before_swap(Hunter, xd);
};
class xd
{
    int y;

public:
    xd(int b)
    {
        y = b;
    }
    friend void swap(Hunter &, xd &);
    friend void after_swap(Hunter, xd);
    friend void before_swap(Hunter, xd);
};
void before_swap(Hunter a, xd b)
{
    // cout << "value before swapping :" << endl;
    cout << "value of x :" << a.x << endl;
    cout << "value of y :" << b.y << endl;
}
void swap(Hunter &u, xd &w)
{
    int temp;
    temp = u.x;
    u.x = w.y;
    w.y = temp;
}

void after_swap(Hunter a, xd b)
{
    cout << "value of x :" << a.x << endl;
    cout << "value of y :" << b.y << endl;
}

int main()
{
    Hunter hunter1(9);
    xd hunter2(12);
    cout << "value before swapping :" << endl;
    before_swap(hunter1, hunter2);
    swap(hunter1, hunter2);
    cout << "value after swapping :" << endl;
    after_swap(hunter1, hunter2);

    return 0;
}