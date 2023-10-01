#include<iostream>
using namespace std;
class hunter{
    int x;
    int y;
    public:
    hunter(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"the value of x = "<<x<<endl;
        cout<<"the value of y = "<<y<<endl;
    }
    void operator -(){
        x= -x;
        y= -y;
    }

};
int main ()
{  
    hunter a(4,5);
    a.display();
    -a;
    a.display();



return 0;
}