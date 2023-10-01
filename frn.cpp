#include<iostream>
using namespace std;
class hunter{
    public:
    void display(){
        cout<<"hi"<<endl;
    }
friend void get(hunter a);
};
void get (hunter a){
    a.display();
}
int main ()
{
    hunter obj;
    get(obj);

return 0;
}