#include <iostream>
#include<cstring>
using namespace std;
 int main(){
     char b[] ="utsav";
     char a[]= "wagle";
      cout<<"concentration =  \t"<<strcat(a,b)<<endl;
      cout<<"copy = \t "<<strcpy(a,b)<<endl;
      cout<<"size = "<<strlen(b)<<endl;
      cout<<"copy = \t "<<a<<endl;
      

 return 0;
 }


//  #include<iostream>
// #include<cstring>
// using namespace std;
// class hunter
// {
// private:
    
//     string name2;
//     string name1;
// public:
//     hunter();
//      void adding();

// };

// hunter::hunter(/* args */)
// {
// name1 = "utsav";
// name2 = "wagle";
// }
//  void hunter ::adding(){
//     //  strcat (name1,name2);
//      name1.append(name2);
//      cout<<"my name is "<<name1<<endl;
//     string name = name1 + name2;
//      cout<<"my name is "<<name<<endl;

//  }



// int main ()
// {
// hunter xd;
// xd.adding();

// return 0;
// }