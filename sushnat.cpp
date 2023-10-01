// function 4 type
// 1= with argument and with return value (int) 
// 4= withour argument with return value (int)


// 2= without argument without retun value(void)

// 3 = with argument without retun value(void)



// #include"iostream"
// using namespace std;
// int xd (int a , int b){
//     int c ;
//     c = a*b;
//     return c;
// }

// void hunter (int c, int b){
//     cout<<"the value of a = "<<c<<endl;
//     cout<<"the value of b = "<<b<<endl;
// }
 
//  int main(){
//      int num1,num2;
//      cout<<"enter the two value = ";
//      cin>>num1;
//      cin>>num2;
//      cout<<"multiplication of two number"<<xd(num1,num2)<<endl;
//      hunter(num1,num2);


//      return 0;
//  }



#include<iostream>
using namespace std;
int xd(int x){
    int c=0;
    for (int i = 1; i <= x; i++)
    {
        if (x%i==0)
        {
            c++;
        }
        
    }
    if (c == 2)
    {
        return 2;

    }
  
    return 0;
}

int main()
{
    int a;
    cout<<"enter the number you want to check wtheather prime or not"<<endl;
    cin>>a;
    if (xd(a)==2)
    {
    cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}


  