#include<iostream>
using namespace std;
class hunter{
int x;
int y;
public:
hunter(){}
hunter(int x,int y){
    this->x=x;
    this->y=y;
}
void display(){
    cout<<"the value of x ="<<x<<endl;
    cout<<"the value of y ="<<y<<endl;
}
friend hunter operator -(hunter);
};
hunter operator -(hunter a){
    hunter temp;
    temp.x =-a.x;
    temp.y=-a.y;
    return temp;
}
int main ()
{
    hunter a(3,6);
    a.display();
    hunter b=-a;
    b.display();

return 0;
}