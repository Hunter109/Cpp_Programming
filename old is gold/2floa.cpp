#include<iostream>
using namespace std;
template<class h>
class multiply{
    h x;
    h y;
    public:
    multiply(h a, h b){
        x=a;
        y=b;
    }
    void multiply_xd(){
        cout<<"muliplication "<<x*y<<endl;
    }

};
int main ()

{
    multiply <int>h1(9,8);
    h1.multiply_xd();
    multiply<float>h2(2.3,4.5);
    h2.multiply_xd();

return 0;
}