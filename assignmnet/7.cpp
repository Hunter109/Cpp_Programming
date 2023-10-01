// Create a class called Employee with data member Code, Name, 
// Address and Salary. Create a constructor to initialize the member of the class. 
// Also create another constructor so that we can create an object from another 
// object. Define member function display( ) to display the information of the 
// class.
#include<iostream>
using namespace std;
class Employee{
    private:
string name;

string code;

string address;
string  salary;
public:
Employee(string name, string code, string address, string salary){
    this->name=name;
    this->code=code;
    this->address=address;
    this->salary=salary;


}
Employee(Employee &a){
    name=a.name;
    code=a.code;
    address=a.address;
    salary=a.salary;



}
void display(){
    cout<<"information of employee :"<<endl;
    cout<<"employee name : "<<name<<endl;
    cout<<"employee code : "<<code<<endl;
    cout<<"employee salary : "<<salary<<endl;
    cout<<"employee address : "<<address<<endl<<endl;

}
};
int main ()
{
    Employee hunter("utsav wagle","3775","5000","bharatpur-7");
    Employee hunter1=hunter;
    hunter.display();
    hunter1.display();

return 0;
}