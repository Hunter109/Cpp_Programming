// hierarchical inheritance//

#include <iostream>
using namespace std;

class College
{
public:
    void info()
    {
        cout << "United technical college" << endl;
    }
};

class Civil : public College
{
public:
    void show()
    {
        cout << "I am from civil" << endl;
    }
};

class Computer : public College
{
public:
    void show()
    {
        cout << "I am from computer" << endl;
    }
};

int main()
{

    Civil c1;

    c1.info();
    c1.show();

    Computer c2;

    c2.info();
    c2.show();

    return 0;
}
