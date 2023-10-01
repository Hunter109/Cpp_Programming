#include<iostream>
using namespace std;
class class2;
class class1{
    int x;
    public:
    class1(int a){
        x = a;
    }
    friend void max(class1 , class2);
};
 class class2{
    int y;
    public:
    class2(int b){
        y = b;
    }
    friend void max(class1 , class2);
 };
 void max(class1 u , class2 w){
    if (u.x>w.y)
    {
        cout<<"the maaximum number is "<<u.x<<endl;
    }
    else
    {
        cout<<"the maximum number is "<<w.y<<endl;
    }
    
 }
int main ()
{
    class1 a(8);
    class2 b(10);
    max(a,b);
    

return 0;
}