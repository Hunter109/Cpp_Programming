#include<iostream>
using namespace std;
class utsav;
class hunter{
int x = 9 ;
public:
friend void operator +(hunter , utsav);
};
class utsav{
int y = 9 ;
public:
friend  void operator +(hunter , utsav);
};
void operator+(hunter a, utsav b){
    cout<<"the sum if "<<a.x+b.y;
}


int main ()
{
    utsav a;
    hunter b;
    b + a;

return 0;
}