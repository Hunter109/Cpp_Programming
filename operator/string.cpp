#include<iostream>
using namespace std;
class name{
    string first;
    string last;
    string full_name;
    public:
    name(string f, string l){
        first = f;
        last=l;
    }
    void operator ++(){
    }
    void display(){
        full_name= first+last;
        cout<<"the finame after ter bal bla "<<full_name<<endl;
    }

};
int main ()
{
    name hunter("utsav","wagle");
    // ++hunter;
    hunter.display();

return 0;
}