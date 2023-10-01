#include<iostream>
using namespace std;
class alpha{
    int a;
    public:
    alpha(int x){
        a = x;
    }
    void showa(){
        cout<<"the value of a is "<<a<<endl;
    }
};
class beta{
    int b;
    public:
    beta(int y){
        b = y;
 
    }
    void showb(){
        cout<<"the value of b is "<<b<<endl;
    }
};
class gamma:public alpha, public beta{
    int c;
    public:
    gamma(int x , int y, int z):alpha(x),beta(y){
        c=z;
    }
    void showg(){
        cout<<"the value of c is "<<c<<endl;
    }


};

int main ()
{
gamma g1(7,8,9);
g1.showa();
g1.showb();
g1.showg();

return 0;
}