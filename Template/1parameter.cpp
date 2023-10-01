#include<iostream>
using namespace std;
template <class xd>
class Hunter{
    xd weight;
    public:
    Hunter(xd weight){
        this->weight=weight;
    }
    void Display(){
        cout<<" your weight is "<<this->weight;
    }

};
template<class a, class b>
class utsav{
    a lenght;
    b breadth;
    public:
    utsav(a x, b y){
        this->lenght=x;
        this->breadth=y;
    }
    void area();

};
template<class a, class b>
void utsav <a,b>::area(){
    cout<<endl;
    cout<<lenght*breadth;
}
template< class a,class b>
void volume(a x, b y , b w){
    cout<<"volume of : "<<endl;
    cout<<x*y*w;
}


int main ()
{
    Hunter<int > a(70);
    a.Display();
    utsav<float , int> u(2.5,5);
    u.area();
    volume(7.5,8,6);

return 0;
}