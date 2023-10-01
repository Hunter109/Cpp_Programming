#include <iostream>
using namespace std;
template <class a>
void swaap(a &x, a &y)
{
    a temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 9;
    int b = 10;
    float c = 7.7;
    float d = 8.8;
    char e = 'e';
    char f = 'f';
    cout << "value after swap" << endl;
    swaap(a, b);
    cout << "the value of a is" << a << " and value of b is" << b << endl;
    swaap(c, d);
    cout << "the value of c is" << c << " and value of d is " << d << endl;
    swaap(e, f);
    cout << "the value of e is" << e << " and value of f is" << f << endl;

    return 0;
}