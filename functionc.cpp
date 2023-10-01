#include<iostream>
using namespace std;
class deepak {
    private:
   static int sn;
 string xd;
    
    public:
    static void utsav(int x){
        sn=x;
    }
    void name(){
        cout<<"enter your name"<<endl;
        getline(cin,xd);
        cout<<"my name is "<<xd<<endl;
        cout<<"your serrial number"<<sn<<endl;
        sn++;
    }
    void boski();
};
int deepak :: sn ;
  void deepak :: boski(){
        name();
    }

int main(){
    deepak obj1,obj2;
   obj1.utsav(9);
//    cout<<deepak::sn;
    obj1.boski();
    obj2.boski();
    return 0;
}