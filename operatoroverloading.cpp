#include<iostream>
using namespace std;
class hunter{
int age;
public:
hunter(int age){
    this->age=age;
}
void display(){
    cout<<"your age is "<<age<<endl;
}
void operator ++(int){
    age++;

}
};
int main ()
{
    hunter a(8);
    a.display();
    a++;
    a.display();

return 0;
}