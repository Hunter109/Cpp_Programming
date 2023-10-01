#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"value o a "<<a;
    cout<<"value o b "<<b;
}
inline int hunter (){
    static int c = 0;
    return c;
}
int main(int argc, char const *argv[])
{
    int a = 30;
    int b = 40;
    cout << "the value of a " << a << endl
         << "the value of b " << b << endl;
    swap(a, b);
    cout << "the value of a " << a << endl
         << "the value of b " << b << endl;
cout<<hunter();
cout<<hunter();
    return 0;
}
