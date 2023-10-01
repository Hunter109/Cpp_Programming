#include<iostream>
using namespace std;
class reactangle{
int width;
int length;
float area;
public:
reactangle(int width, int length){
        this->width=width;
        this->length= length;
        area= length*width;
    }
    void display(){
        cout<<"the area of rectangle is " <<area<<endl;
    }
    // reactangle(triangle a){
    //     width=a.get_base();
    //     length = a.get_height();
    //     area = width*length;
    // }

};

class triangle{
    int base;
    int height;
    float area;
    public:
    triangle(int base, int height){
        this->base=base;
        this->height= height;
        area= 0.5*height*base;
    }
    void display(){
        cout<<"the area of triangle is " <<area<<endl;
    }
    operator reactangle( ){
        reactangle temp(base,height);
        return temp;
    }
int get_base(){
    return base;
}
int get_height(){
    return height;
}

};

int main ()
{
    triangle xd(20,5);
    reactangle utsav=xd;
    
    xd.display();
    utsav.display();

return 0;
}