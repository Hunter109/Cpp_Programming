#include<iostream>
using namespace std;
int main ()
{
int a = 66;
int *xd = &a;
*xd = 77;
cout<<"the value of xd"<<xd<<endl;
            cout<<"the value of a  "<<a<<endl;
            cout<<"the value of a  "<<*(xd)<<endl;
return 0;
}