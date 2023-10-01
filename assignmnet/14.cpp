// Program 14: Write a program to enter the information of n students and then
// display it using the concept of multilevel inheritance.
#include <iostream>
using namespace std;
class Student_data
{
protected:
    string name;
    int cls;
    int roll_num;
    
};
class Student_input : public Student_data
{
public:
    void input();
   
};
class Student_output : public Student_input
{
public:
    void display();
   
};

void Student_input::input(){
     
        cout << "Enter the following details of the student" << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Class : " ;
        cin >> cls;
        cout << "Roll No : " ;
        cin >> roll_num;
    
}
void Student_output::display(){
     
        cout << "Details of the student" << endl;
        cout << "Name : " ;
        cout << name << endl;
        cout << "Class : ";
        cout << cls << endl;
        cout << "Roll No : ";
        cout << roll_num << endl;
    
}
int main()
{

    int *num =new int;
    cout << "Enter the number of student" << endl;
    cin >> *num;
    Student_output hunter[*num];
    for (int i = 0; i < *num; i++)
    {
        hunter[i].input();
    }
    for (int i = 0; i < *num; i++)
    {
        hunter[i].display();
    }
    delete num;

    return 0;
}