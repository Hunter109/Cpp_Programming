//multilevel inheritance//
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Base class function.";
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    C c1;
    c1.display();
    return 0;
}
