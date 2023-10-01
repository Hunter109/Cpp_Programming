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
        cout<<"the value of x "<<x<<endl;
        cout<<"the value of y "<<y<<endl;
    }
    // hunter operator +=(hunter h ){
    //     hunter xd;
    //    xd.x= this->x+=h.x;
    //   xd.y=this->y+=h.y;
    //   return xd;
    // }
    friend hunter operator+=(hunter , hunter);

};
hunter operator +=(hunter a,hunter b){
    hunter xd;
    xd.x=a.x+=b.x;
    xd.y=a.y+=b.y;
    return xd;
}

int main ()
{
    hunter h1(5,6),h2(5,6);
    h1.display();
    h2.display();
    cout<<"after addition"<<endl;
    
hunter h3;
h3 =   h1+=h2;
 h3.display();


return 0;
}