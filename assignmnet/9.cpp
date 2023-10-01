#include<iostream>
using namespace std;
class acount{
int account_num;
int balance;
static int min_balance;
public:
static void get(){
    min_balance = 0;
}
void data(){
    cout<<"enter your acount number : ";
    cin>>account_num;
    cout<<"enter your baalnce : ";
    cin>>balance; 

}
void display(){
cout<<"account number : "<<account_num<<endl;
cout<<"minimum balance : "<<min_balance<<endl;
cout<<"balance : "<<balance<<endl;
}
};
int acount::min_balance;
int main ()
{
    acount hunter[5];
    acount::get();
     for (int i = 0; i < 5; i++)
    {
        cout << "data entry of " << i + 1 << " object" << endl;
        hunter[i].data();
        cout << "acount info " << i + 1 << " object" << endl;
        hunter[i].display();
        cout<<endl;

        
    }

return 0;
}