// Program 22: Write a program to find the sum and difference of any two
// complex numbers by overloading ‘+’ and ‘-‘ operator.
#include <iostream>
using namespace std;
class overloader
{
    int real;
    int img;

public:
overloader(){

}
    overloader(int x,int y)
    {
        this->real=x;
        this->img=y;
    }
    void display(){
        cout<<"complex number "<<endl;
        cout<<real<<"+ i "<<img<<endl;
    }
   
    overloader operator+(overloader o2)
    {   
        overloader b1;
        b1.img = img+o2.img;
        b1.real = real+o2.real;
        return b1;
    
        
       
    }
    overloader operator-(overloader o2)
    {
        overloader a1;
        a1.img= img-o2.img;
        a1.real= real-o2.real;
       return a1;
    }
};
int main()
{
    overloader hunter(6,3), xd(2,4),utsav;
  utsav= hunter + xd;
  utsav.display();
//    utsav.display_sum();
    // utsav.display_sum();
   utsav=  hunter - xd;
     utsav.display();
    // utsav.display_difference();
    return 0;
}