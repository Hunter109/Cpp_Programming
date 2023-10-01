#include <iostream>
using namespace std;
class Hunter
{
    int height;
    int base;

public:
    Hunter()
    {
        height = 0;
        base = 0;
    }
    Hunter(int h, int b)
    {
        height = h;
        base = b;
    }
    void area()
    void area()
    {

        cout << "area of triangle : " << 0.5 * (height) * (base);
    }
};
int main()
{
    int h, b;
    cout << "enter height of triangle :" << endl;
    cin >> h;
    cout << "enter base of triangle :" << endl;
    cin >> b;
    Hunter h1(h, b);
    h1.area();

    return 0;
}
