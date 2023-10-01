#include <iostream>
using namespace std;
class imaginary;
class real
{
private:
    int real_num1;
    int real_num2;

public:
    real(int x, int y)
    {
        real_num1 = x;
        real_num2 = y;
    }
    friend void complex(real, imaginary);

    friend void sum(real, imaginary);
};
class imaginary
{
private:
    int img_num1;
    int img_num2;

public:
    imaginary(int x, int y)
    {
        img_num1 = x;
        img_num2 = y;
    }
    // friend class real;
    friend void complex(real, imaginary);
    friend void sum(real, imaginary);
};

void complex(real a, imaginary b)
{
    cout << "two complex number : " << endl;
    cout << a.real_num1 << " + i" << b.img_num1 << endl;
    cout << a.real_num2 << " + i" << b.img_num2 << endl;
}
void sum(real a, imaginary b)
{
    cout << "the sum of two complex number" << endl;
    cout << a.real_num1 + a.real_num2 << " + i" << b.img_num1 + b.img_num2;
}

int main()
{
    real hunter(7, 9);
    imaginary hunter1(5, 2);
    complex(hunter, hunter1);
    sum(hunter, hunter1);

    return 0;
}
