#include<iostream>
using namespace std;
 class hunter{
     int roll;
     int reg;
      friend void xd(hunter x);
      public:
      void get_data(){
         cout<<"enter your reg num"<<endl;
         cin>>reg;
         cout<<"enter your roll num"<<endl;
         cin>>roll;
      }
 };
 void xd (hunter x){
    //  x.get_data();
   cout<<"your reg num "<<x.reg<<endl;
          cout<<"your roll num "<<x.roll<<endl;
 }
 int main(){
     hunter h1;
  h1.get_data();
    xd(h1); 
    return 0;
 }