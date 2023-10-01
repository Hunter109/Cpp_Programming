#include <iostream>
using namespace std;

class hunter
{

public:

hunter(){
    cout<<"constructor of hunter"<<endl;
}
~hunter(){
    cout<<"destructor of hunter"<<endl;
}
    //   virtual//
     void show()
    {
        cout << "from class hunteer"<<endl;
    }
};
class utsav : public hunter
{
public:
utsav(){
    cout<<"constructor of utsav"<<endl;
}
~utsav(){
    cout<<"destructor of utsav"<<endl;
}
    void show()
    {
        cout << "form utssav class"<<endl;
    }
};

int main()
{
    // hunter *p = new utsav();

    // p->show();
    // delete p;
    utsav a1;
    utsav a2;
    

    return 0;
}
