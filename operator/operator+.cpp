#include<iostream>
using namespace std;
class hunter{ 
int meter;
int centimer;
public:
hunter(){

}
hunter(int x,int y){
    meter=x;
    centimer=y;
}
void display(){
    cout<<"distance : "<<meter<<"meter and "<<centimer<<"centimeter"<<endl;
}
hunter operator +( hunter x){
    hunter a;
    a.meter=meter+x.meter;
    a.centimer=centimer+x.centimer;
    if (a.centimer>=100)
    {
        a.meter++;
        a.centimer-=100;
        /* code */
    }
    return a;
    

}

};
int main ()
{
hunter x(20,40),y(3,50),z;
x.display();
y.display();
z=x+y;
z.display();
return 0;
}