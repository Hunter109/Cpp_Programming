#include <iostream>
using namespace std;
 
class Animal{
public:
    Animal(){
        cout << "This is an Animal "<<endl;
    }
};

//single inheritance //
class Dog: public Animal{
public:
    Dog(){
        cout << "that is Dog ";
    }
};
 
class Domestic{
public:
    Domestic(){
        cout << "and Domestic";
    }
};

//Multiple Inheritance 
class Rocky: public Dog, public Domestic{
public:
    Rocky(){
        cout << "\nName of the dog is Rocky! \n";
    }
};
 
int main()
{
    Rocky mydog;
    return 0;
}