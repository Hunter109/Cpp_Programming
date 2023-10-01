#include<iostream>
using namespace std;
class complex{
    int img;
    int real;
    public:
    complex(){}
    complex(int r, int i){
        real= r;
        img=i;

    }
    void display(){
        cout<<real<<" + i "<<img<<endl;
    }
    friend  complex operator+ (complex u , complex w);
    friend complex operator- (complex x , complex z);
};
complex operator+ (complex u , complex w){
    complex xd;
    xd.real= u.real+w.real;
    xd.img = u.img+w.img;
    return xd;
}
complex operator- (complex x , complex z){
    complex wagle;
    wagle.real= x.real-z.real;
    wagle.img = x.img-z.img;
    return wagle;
}
int main ()
{
complex c1(9,6),c2(5,3),c3;
c3 = c1+c2;
c3.display();
c3=c1-c2;
c3.display();
return 0;
}