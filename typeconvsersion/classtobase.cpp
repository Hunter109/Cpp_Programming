#include<iostream>
using namespace std;
class Hunter{
int hrs;
public:
void getData(){
    cout<<"enter hrs"<<endl;
    cin>>hrs;
}
operator int(){
    int min = hrs*60;
    return min;
}

};
int main ()
{
    Hunter xd;
    xd.getData();
    int sec;
    int min;
    min=xd;
   

    cout<<endl;
    cout<<"conversion of hrs in min "<<min;
    

return 0;
}