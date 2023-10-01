#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex() {}
    complex(int real, int img)
    {
        this->img = img;
        this->real = real;
    }
    void display(){
        cout<<real<< "+ i "<<img<<endl;
    }
    friend complex operator + (complex,complex);
};
complex operator+(complex x,complex y){
    complex xd;
    xd.img=x.img+y.img;
    xd.real=x.real+y.real;
    return xd;
}
int main()
{
    complex a,b(5,4),c(2,5);
    c.display();
    b.display();
    a= b+c;
    a.display();

    return 0;
}