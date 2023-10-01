#include<iostream>
using namespace std;
class hunter{
    int x;
    int y;
    public:
    hunter(){}
    hunter(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"the value of x = "<<x<<endl;
        cout<<"the value of y = "<<y<<endl;

    }
    friend hunter operator --(hunter ,int);
    hunter operator ++(int){
        hunter xd;
        xd.x=x++;
        xd.y=y++;
        return xd;

    }

};
hunter operator --(hunter xd,int){
    hunter a;
    a.x=xd.x--;
    a.y=xd.y--;
    return a;

   
}
int main ()
{
    hunter x(4,5);
    x.display();
    hunter y=x--;
    x.display();
    // y.display
    y=x++;
    y.display();

return 0;
}