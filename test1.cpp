
#include <iostream>
using namespace std;
class A
{
    int num;

public:
    void get_data()
    {
        cout << "Enter num:" << endl;
        cin >> num;
    }
  
    void display()
    {
        cout << "Num: " << num << endl;
    }
    int operator<(A a)
    {
        if (num < a.num)
        {
            return 1;
        }
        else{

            return 0;
        }
    }
};
int main()
{
    A obj[4];
    for (int i = 0; i < 4; i++)
    {
        obj[i].get_data();
    }
    int m = 0;
    // int min = obj[m].getNum();
    for (int i = 1; i < 4; i++)
    {
        int result = obj[i] < obj[m];
        if (result == 1)
        {
            m = i;
        }
    }
    cout<< "Min Number:"<<endl;
    obj[m].display();
    return 0;
}