#include<iostream>
using namespace std;

void multiply (int x, int y){

  try
  {
    if (x == 0 || y == 0)
    {
      if (x==0)
      {
        throw (x);
      }
      else if (y == 0){
        throw (y);
      }
      
    }
    
  cout<<"multiplication of two number is" <<x*y<<endl;
  }
  catch( ...)
  {
    cerr<<"the given integrer is 0 so no multiplocation"<<endl;
  }
  
}

int main ()
{
int a,b;

cout<<"enter the value of a and b"<<endl;
cin>>a;
cout<<"enter the value of a and b"<<endl;
cin>>b;
  multiply(a,b);
try
{
    if ( a<0 || b<0)
    {
        if (a<0)
        {
          throw(a);
        }
        else if(b<0){
          throw(b);
        }
    }
   int result = a*b;
cout<<"the answer id "<<result<<endl;
    
}
catch(int i)
{
  cerr<<"area never negative "<<i;
}

return 0;
}