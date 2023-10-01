#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

    Complex()
    {

        real = 0;
        imaginary = 0;
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex addComplexNumber(Complex C1, Complex C2)
    {

        Complex xd;

        xd.real = C1.real + C2.real;

        xd.imaginary = C1.imaginary + C2.imaginary;

        return xd;
    }
};

int main()
{

    Complex hunter(4, 7);

    cout << " First Complex number 1 : " << hunter.real
         << " + i" << hunter.imaginary << endl;

    Complex hunter2(9, 5);

    cout << " Second Complex number 2: " << hunter2.real
         << " + i" << hunter2.imaginary << endl;

    Complex hunter3;

    hunter3 = hunter3.addComplexNumber(hunter, hunter2);

    cout << "Sum of complex number  1 and 2 : "
         << hunter3.real << " + i "
         << hunter3.imaginary;

    return 0;
}