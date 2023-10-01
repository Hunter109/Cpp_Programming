#include<iostream>
using namespace std;
//basic datatype to class ( using constructor)
class Hunter{
    int min;
    int sec;
    public:
    Hunter(){}
    Hunter(int hrs){

    
    min = hrs*60;
    sec = min*60;
    }
    void display(){
        cout<<"min : "<<min<<"sec:"<<sec;
    }

};

int main ()
{
    int hours;
    cout<<"enter hours"<<endl;
    cin>>hours;
    Hunter xd;
    xd = hours;
    xd.display();

return 0;
}