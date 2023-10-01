// Dynamic constructor for addition of two complex number
#include <iostream>
using namespace std;
class complex
{
public:
    int *ptr1;
    int *ptr2;

public:
    complex(int x, int y)
    {
        ptr1 = new int;
        ptr2 = new int;
        *ptr1 = x;
        *ptr2 = y;
    }
    void putData(complex o2)
    {
        cout << "Sum for complex number" << endl;
        cout << *ptr1 + *(o2.ptr1) << "i+ " << *ptr2 + *(o2.ptr2) << endl;
    }
    ~complex()
    {
        delete ptr1;
        delete ptr2;
    }
};
int main()
{
    complex o1(4, 5), o2(5, 6);
    o1.putData(o2);
    return 0;
}
