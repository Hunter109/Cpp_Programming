
#include <iostream>
using namespace std;

class base
{
public:
    int x;
    int y;
    void input()
    {
        cout << "Enter the coordinate of Vector x-axis and y-axis" << endl;
        cin >> x;
        cin >> y;
    }
    friend void display(base);
};
class derived : public base
{
public:
    void add_vector(base &o1, base &o2)
    {
        o1.input();
        o2.input();
        o1.x += o2.x;
        o1.y += o2.y;
    }
};
void display(base o1)
{
    cout << "Sum of two vector is:" << o1.x << "i+" << o1.y << "j" << endl;
}

int main()
{
    base hunter1, hunter2;
    derived xd;
    xd.add_vector(hunter1, hunter2);
    display(hunter1);
    return 0;
}