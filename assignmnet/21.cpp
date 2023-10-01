// Program 21: Write a program to add two complex numbers. Your program
// should have three objects. Each object contains two attributes (ie. real and
// imaginary part). Now add each attribute and save them into third object
// separately. Use the concept of ‘+’ operator overloading.
#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    complex()
    {
    }
    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    friend complex operator+(complex o1, complex o2);
    void display()
    {
        cout << "The sum of two complex number is: " << endl;
        cout << real << "+i" << imaginary << endl;
    }
};
complex operator+(complex o1, complex o2)
{
    complex hunter;
    hunter.real = o1.real + o2.real;
    hunter.imaginary = o1.imaginary + o2.imaginary;
    return hunter;
    
}
int main()
{
    complex hunter1(6, 4), hunter2(2, 3), hunter3;
    hunter3 = hunter1 + hunter2;
    hunter3.display();
    
    return 0;
}