#include<iostream>
using namespace std;
int main (){
int *num = new int;
*num=10;
cout<<num <<endl;
cout<<*num;
delete num;



// {
//     int a;
//     cout<<"enter the number"<<endl;
//     cin>>a;

// int *num= new int[a];
// for (int i = 0; i < a; i++)

// {
//     cout<<"enter your number"<<endl;
//     cin>>num[i];

// }
// for (int i = 0; i < a; i++)

// {
//     cout<<" your number"<<num[i]<<
//     endl;

// }


return 0;
}