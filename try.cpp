#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){}
    complex(int x, int y){
        real=x;
        img=y;
    }
    void display(){
        cout<<"the complex number is "<<endl;
        cout<<real<<" + i "<<img<<endl;
    }
    complex sum(complex a, complex b){
        complex xd;
        xd.real= a.real+b.real;
        xd.img= a.img+b.img;
        return xd;
    }

};
int main ()
{
    complex c1(9,2);
    complex c2(6,2);
    complex c3= c3.sum(c1,c2);
    c3.display();


return 0;
}