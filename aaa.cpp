/* 

// with argument without return value; given number is even or not
#include<iostream>         

using namespace std;


  void even(int num){
      if (num%2==0)
      {
        cout<<num<<"is even number";
      }
      else
      {
cout<<num<<"is not even number";
      }
      

  }

  int main()
  {
      int a;
      cout<<"enter the value of a"<<endl;
      cin>>a;
      even(a);

      return 0;
  } */
  
  /* without argument without return value; check given number is prime or not
  #include<iostream>
  using namespace std;
   void prime()
   {
     int xd=0,a;
     cout<<"enter the number you want to check wheather its prime or not"<<endl;
      cin>>a;
      for (int i = 1; i <= a; i++)
      {
        if (a%i==0)
        {
          xd++;
        }
        
      }
      if (xd==2)
      {
        cout<<a<<" is prime number";
      }
      else
      {
        cout<<a<<" is not prime number";
      }
      
      
   }


   int main(int argc, char const *argv[])
   {
     prime();
     return 0;
   }
    */




  //  with argument with retun value  chcek given numbe is even or not
   /* #include<iostream>
   using namespace std;
   int xd (int a){
     if (a%2==0)
     {
       return 1;
     }
    return 0;
   }
int main(int argc, char const *argv[])
{
  int b,hunter;
  cout<<"enter the number"<<endl;
  cin>>b;
  hunter=xd(b);
  if (hunter==1)
  {
    cout<<"even number";
  }
  else
  {
    cout<<"not even number";
  }
  
  return 0;
}
 */

/* #include<iostream>
using namespace std;
int xd(int a);
int main(int argc, char const *argv[])
{
  int b;
  cout<<"enter the number"<<endl;
  cin>>b;
  cout<<xd(b);

  return 0;
}

int xd(int a){
  int num;
  
  
    num = a*10;
  
  return num;
} */


// without argumet with return value - check prime number
/* #include<iostream>
using namespace std;
int xd(){
  int a;
  cout<<"enter a number to check prime or not"<<endl;
  cin>>a;
  return a;
}
int main()
{
  int num1,cd=0;
  num1 = xd();
  for (int i = 1; i <= num1; i++)
  {
    if (num1%i==0)
    {
      cd++;
    }
    
  }
  if (cd==2)
  {
    cout<<"given number is prime";
  }
  else
  {
    cout<<"given number is not prime";
  }
  
  return 0;
} */


// call by value // call by refrence

// #include<iostream>
// using namespace std;
// void swap (int* a, int *b);
// int main(int argc, char const *argv[])
// {
//   int c=5, d=7;
//   cout<<"value of c is "<<c<<" value of d is "<<d<<endl;
//     swap(c,d);
//   cout<<"value of c is "<<c<<" value of d is "<<d<<endl;


//   return 0;
// }
// void swap(int*a ,int*b){
//   int temp = *a;
//   *a =*b;
//   *b=temp;
// }


//facttorial using recursive
/* #include"iostream"
using namespace std;
int fac(int a){
  if (a<=1)
  {
    return 1;
  }
  return a*fac(a-1);
}

int main(int argc, char const *argv[])
{
  int a;
  cout<<"enter the number "<<endl;
 cin>>a;
 cout<<fac(a); 
  return 0;
}
 */



//fibonnaci series
/* #include"iostream"
using namespace std;
 int fib(int a){
   if (a==0 || a==1)
   {
     return a;
   }
   else
   {
     return (fib(a-1) + fib(a-2));
   }
 }
   int sum(int n){
     if (n==0|| n==1)
     {
       return n;
     }
     else
     {
       return n+sum(n-1);
     }
     
   }

 

 int main()
 {
   int term;
   cout<<"enter the term you want"<<endl;
   cin>>term;
   for (int i = 0; i < term; i++)
   {
     cout<<fib(i)<<"\t";
   }
   
   cout<<"\nsum of natural number\t"<<sum(term);
   return 0;
 }
  */

/* 
#include<iostream>
using namespace std;
 int main(){
   for (int i = 50; i <= 100; i++)
   {
     int xd=0;
     for (int j = 1; j <= i; j++)
     {
       if (i%j==0)
       {
         xd++;
       }
      
     }
  if (xd==2)
  {
  
    cout<<i;
  }
  
     
   }
   
   return 0;
 } */

#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a;
  printf("enter the number");
scanf("%d",&a);
printf("%d the value of a",a);
  return 0;

}


 