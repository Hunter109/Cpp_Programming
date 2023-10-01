#include<iostream>
#include<conio.h>
using namespace std;
class hunter{

int length;
int breadth;

public:
hunter(){}
hunter(int a, int b){
    length = a;
    breadth =b;
}
hunter(hunter &a){
    length = a.length;
    breadth = a.breadth;
}
void area();


};
void hunter::area(){
    cout<<"area of :"<<endl;
    cout<<length*breadth;
}

int main ()
{
hunter h1(8 ,9);
hunter h2(h1);
// hunter h2 = h1;
h1.area();
h2.area();

return 0;
}