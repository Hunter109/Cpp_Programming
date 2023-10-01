#include<iostream>
using namespace std;
class hunter{
    public:
    virtual void name(){
        cout<<"my name is utsav wagle"<<endl;
    }

};
class utsav :public hunter{
public:
void name(){
    cout<<"my name is hunter xd"<<endl;
}
};
int main ()
{
hunter *a,c;
utsav b;
a=&b;
a->name();
b.name();
  
   


return 0;
}