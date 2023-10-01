#include<iostream>
using namespace std;

int main ()
{
float price = 2829.60;
for (int i = 1; i < 5; i++)
{
    price = (price * 0.1) + (price);
}
cout<<price;

return 0;
}