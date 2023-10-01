// #include<iostream>
// using namespace std;
// class complex2;
// class complex1{
//     int real,imaginary;
//     public:

//     complex1(int x,int y)
//     {
//         real=x;
//         imaginary=y;
//     }
//     void display(){
//         cout<<"first complecc number "<<real<<" + i "<<imaginary;
//     }
//     friend void sum(complex1 , complex2);
// };
// class complex2{
//     int real,imaginary;
//     public:

//     complex2(int x,int y)
//     {
//         real=x;
//         imaginary=y;
//     }
//     void display(){
//         cout<<"secomd complecc number "<<real<<" + i "<<imaginary;
//     }
//     friend void sum(complex1 , complex2);
// };
// void sum (complex1 a , complex2 b){
// cout<<"the sum of twp complex number is "<<a.real+b.real<<" + i "<<b.imaginary+a.imaginary<<endl;

// }
// int main ()
// {
//     complex1 c1(3,4);
//     complex2 c2(4,9);
//     c1.display();
//     c2.display();
//     sum(c1,c2);

// return 0;
// }
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
    void display(){
        cout<<real<<" + I "<<imaginary<<endl;
    }

   friend Complex addComplexNumber(Complex C1, Complex C2);
    // {

    //     Complex xd;

    //     xd.real = C1.real + C2.real;

    //     xd.imaginary = C1.imaginary + C2.imaginary;

    //     return xd;
    // }
};
 Complex addComplexNumber(Complex C1, Complex C2)
    {

        Complex xd;

        xd.real = C1.real + C2.real;

        xd.imaginary = C1.imaginary + C2.imaginary;

        return xd;
    }

int main()
{
    Complex c1(8,9);
    Complex c2(2,6);
    cout<<"first complex number"<<endl;
    c1.display();
    cout<<"second complex number"<<endl;
    c2.display();
    cout<<"the sum of two complex number"<<endl;
    Complex c3;
     c3 = addComplexNumber(c1,c2);
    c3.display();

   

    return 0;
}