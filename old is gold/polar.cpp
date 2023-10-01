#include <iostream>
#include <cmath>
using namespace std;
class polar
{
    float radius;
    float angle;

public:
    polar() {}
    void get_data()
    {
        cout << "enter the value of radius" << endl;
        cin >> radius;
        cout << "ennter the angle" << endl;
        cin >> angle;
    }
    void display()
    {
        cout << "In polar form" << endl;
        cout << radius << " and angle=" << angle << endl;
    }
    float getradius()
    {
        return radius;
    }
    float getangle()
    {
        return angle;
    }
};
class rectangular
{
    float x;
    float y;

public:
    rectangular() {}
    rectangular(polar xd)
    {
        float r = xd.getradius();
        float a = xd.getangle();
        x = r * cos(a);
        y = r * sin(a);
    }
    void display()
    {
        cout << " in Rectangular form : x=" << x << "and y =" << y << endl;
    }
};
int main()
{

    polar p1;
    p1.get_data();
    p1.display();
    rectangular r1;
    r1 = p1;
    r1.display();

    return 0;
}