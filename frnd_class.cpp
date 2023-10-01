// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;

        // friend class declaration
        friend class ClassB;

    public:
        // constructor to initialize numA to 12
        ClassA(int x) {
            numA = x;
        }
};

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB(int x) 
        {numB=x; }
    
    // member function to add numA
    // from ClassA and numB from ClassB
    int add();
};


int ClassB ::add(){
     {
        ClassA objectA(1);
        return objectA.numA + numB;
    }
}


int main() {
    ClassB objectB(9);
    cout << "Sum: " << objectB.add();
    return 0;
}