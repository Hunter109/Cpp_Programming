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
    void operator ==(hunter a){
        if (x==a.x && y == a.y)
        {
            cout<<"they are same";
        } else {

            cout<<"they are not Ssame";
        }
        
    }
    void operator >(hunter y){
    if (x>y.x)
    {
        cout<<"maximum number is "<<x;
        /* code */
    }
    else {
        cout<<"maximum number is "<<y.x;
    }
    
}

};
int main ()
{
hunter a,h(3,5),h1(2,5);
h==h1;
h>h1;
return 0;
}