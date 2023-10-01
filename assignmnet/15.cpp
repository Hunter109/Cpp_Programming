// Create classes called class1 and class2 with each having one
// private member. Add member function to set a value (say setvalue) on each
// class. Add one more function max( ) that is friendly to both classes. max( )
// function shound compare two private member of two classes and show
// maximum among them. Create one-one object of each class then set a value on
// them. Display the maximum number among them.

#include <iostream>
using namespace std;

class Hunter_class2;
class Hunter_class1
{
private:
    int num1;

public:
    void setvalue()
    {
        cout << "enter tha value of num1 " << endl;
        cin >> num1;
    }
    friend void maximum(Hunter_class1, Hunter_class2);
};
class Hunter_class2
{
private:
    int num2;

public:
    void setvalue()
    {
        cout << "enter tha value of num2 " << endl;
        cin >> num2;
    }

    friend void maximum(Hunter_class1, Hunter_class2);
};
void maximum(Hunter_class1 x, Hunter_class2 y)
{
    if (x.num1 > y.num2)
    {
        cout<<"maximum number : "<<x.num1<<endl;

    }
    else if (x.num1<y.num2)
    {
        
        cout<<"maximum number : "<<y.num2<<endl;
    }
    else
    {
        cout<<"both number are equal to each other";
    }
    
    
}
int main()
{
    Hunter_class1 xd;
    xd.setvalue();
    Hunter_class2 xd1;
    xd1.setvalue();
    maximum(xd,xd1);

    return 0;
}