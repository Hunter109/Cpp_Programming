#include<iostream>
using namespace std;
class hunter{
int *ptr;
public:
hunter(){
    ptr = new int;
    cout<<"dyanmic constructor"<<endl;
}
~hunter(){
    delete ptr;
    cout<<"disallocated"<<endl;
}

};
int main ()
{
    hunter xd;

return 0;
}