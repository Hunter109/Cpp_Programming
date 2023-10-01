#include<iostream>
using namespace std;
class hunter{
int x;

public:
hunter(){}
hunter(int x){
    this->x=x;

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
    hunter h1(6),h2(7),h;
    h1>h2;

return 0;
}