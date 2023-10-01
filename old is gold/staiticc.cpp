#include<iostream>
using namespace std;
class hunter {
    static int count;
    public:
    hunter(){
        ++count;
    }
static void display(){
    cout<<"the total number of object creatred"<<count<<endl;
}


};
int hunter :: count=0;
int main ()
{
hunter a[10];
hunter::display();
a->display();
return 0;
}