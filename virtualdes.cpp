#include <iostream>
using namespace std;
class a
{
public:
    virtual ~a()
    {
        cout << "destructor call from base" << endl;
    }
};
class b : public a
{
public:
    ~b()
    {
        cout << "destrunctor from derived" << endl;
    }
};
int main()
{
    a *obj;
    obj = new b;
    delete obj;
    return 0;
}