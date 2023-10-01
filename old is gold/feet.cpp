#include <iostream>
using namespace std;
class distance1
{
    int feet;
    float inch;

public:
    distance1() {}
    distance1(int f, float i)
    {
        feet = f;
        inch = i;
    }
    int get_feet()
    {
        return feet;
    }
    int get_inch()
    {
        return inch;
    }
};

class distance2
{
    int meter;
    float cm;

public:
    distance2() {}
    distance2(distance1 a)
    {
        int f = a.get_feet();
        float i = a.get_inch();
        int sum = f + (i / 12);
        float m = sum / 3.3;
        meter = int(m);
        cm = (m - meter) * 100;
    }
    void display()
    {
        cout << "the disatnce is " << endl;
        cout << meter << "meter and  " << cm << "centimeter" << endl;
    }
};
int main()
{
    distance1 a(18, 1.8);
    distance2 b;
    b = a;
    b.display();

    return 0;
}