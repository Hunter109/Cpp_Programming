#include<iostream>
using namespace std;
class area{
    float length;
    float breadth;
    float Area;
    public:
    area(){

    }
    area(float l , float b){
        length= l;
        breadth = b;

    }
    void display(){
        Area= (0.5*length*breadth);
        cout<<"the area of triangle "<< Area;
    }
};
int main ()
{
    area a1(7,8);
    a1.display();

return 0;
}