#include <iostream>
using namespace std;
class b;
class a
{
    int x;

public:
    a(int u)
    {
        x = u;
    }
    friend void swap(a &U, b &w);
    friend void after_swap(a i, b k);
};
class b
{
    int y;

public:
    b(int w)
    {
        y = w;
    }
    friend void swap(a &U, b &w);
    friend void after_swap(a i, b k);
};
void swap(a &u, b &w)
{

    int temp = u.x;
    u.x = w.y;
    w.y = temp;
}
void after_swap(a i, b k)
{
    cout << "the value of x is " << i.x << endl;
    cout << "the value of y is " << k.y << endl;
}
int main()
{
    a u(9);
    b w(10);
    swap(u, w);
    after_swap(u, w);

    return 0;
}