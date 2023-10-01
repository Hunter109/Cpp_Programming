#include<iostream>
using namespace std;
class Hunter{
    float celsius;
    public:
    void getData(){
        cout<<"enter celsius "<<endl;
        cin>>celsius;
    }
    operator float(){
        float farehaniet = (celsius*1.8)+32;
        return farehaniet;
    }

};
int main ()
{
    float farehneit;
    Hunter xd;
    xd.getData();
    farehneit=xd;
    cout<<"celsius to faraheniet "<<farehneit;

return 0;
}