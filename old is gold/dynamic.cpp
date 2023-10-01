// Program 22: Write a program to find the sum and difference of any two
// complex numbers by overloading ‘+’ and ‘-‘ operator.
#include <iostream>
using namespace std;
class overloader
{
    int *real;
    int *img;

public:
    overloader(


    ) {}
    overloader(int x, int y)
    {
        real = new int;
        img = new int;
        *real = x;
        *img = y;
        cout << "dyanmically memory allocate" << endl;
    }

    void display()
    {
        cout << "complex number " << endl;
        cout << *real << "+ i " << *img << endl;
    }

    overloader add(overloader u, overloader w)
    {
        overloader temp(0,0);
        *temp.real = *u.real + *w.real;
        *temp.img = *u.img + *w.img;
        return temp;
    }
    ~overloader()
    {
        delete img;
        delete real;
        cout << "deallocate memory sucessfully " << endl;
    }
};
int main()
{
    overloader  hunter(8, 9), xd(6, 7),utsav;
    hunter.display();
    xd.display();
    utsav = utsav.add(hunter, xd);
    cout<<"the sum of two complex number is"<<endl;
    utsav.display();

    return 0;
}