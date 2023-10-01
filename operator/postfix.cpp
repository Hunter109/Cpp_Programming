#include<iostream>
using namespace std;
class hunter{
int x;
int y;
public:
hunter(){

}
hunter(int x,int y){
    this->x=x;
    this->y=y;
}
void display(){
    cout<<"the value of x ="<<x<<endl;
    cout<<"the value of y ="<<y<<endl;
}
hunter operator --(int){
    hunter xd;
    xd.x=x--;
    xd.y=y--;
    return xd;
}
};
int main ()
{
    hunter a(6,7);
    a.display();
   hunter b;
   b= a--;
    a.display();
    b.display();

return 0;
}