// #include<iostream>
// #include<iomanip>
// using namespace std;
// class hunter{
//   private:
//   int num1 , num2;
//   public:
//   int num3 ,num4;
//   void utsav(int a,int b);

//   void result(){
//     cout<<"the value of num1="<<num1<<endl;
//     cout<<"the value of num2="<<num2<<endl;
//     cout<<"the value of num3="<<num3<<endl;
//     cout<<"the value of num4="<<num4<<endl;
//   }
// };

// void hunter :: utsav(int a,int b){
//   num1=a;
//   num2=b;
// }
// int main(int argc, char const *argv[])
// {
//      hunter xd;
//      xd.num3 = 10;
//      xd.num4 = 11;
//     xd.utsav(7,8);
//     xd.result();
//     return 0;
// }

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class hunter
{
private:
  int reg;
  int roll;
  string phone;

public:
  string name;
  string grade;
  string address;
  string college;

  void num(int a, int b, string c)
  {
    reg = a;
    roll = b;
    phone = c;
  }
  void student_card()
  {
    cout << roll << "\t" << name << "\t" << grade << "\t" << reg << "\t" << phone << "\t" << address << "\t" << college;
  }
};
int main()
{
  int a, b;
  string c;

  hunter utsav;
  // utsav.name = "utsav wagle";
  cout << "enter your name" << endl;
  // cin>>utsav.name;
  getline(cin, utsav.name);
  // utsav.grade = "bachelor";
  cout << "enter your grade" << endl;
  getline(cin, utsav.grade);
  // utsav.address = "Bharatpur -7";
  cout << "enter your address" << endl;
  getline(cin, utsav.address);
  // utsav.college="united technical college";
  cout << "enter your college name" << endl;
  getline(cin, utsav.college);
  cout << "enter reg num" << endl;
  cin >> a;
  cout << "enter roll num" << endl;
  cin >> b;
  cout << "enter phone num" << endl;
  cin >> c;

  cout << endl
       << endl;
  system("cls");
  cout << "\n\n\t\t\t\t\t\t STUDENTS IDENTITY CARD \n\n";
  cout << "!======================================================================================================!\n";
  cout << " Roll.No    Name         Grade       Reg_Num     Phone_Num      Address             College" << endl;
  cout << "!======================================================================================================!\n";
  utsav.num(a, b, c);
  utsav.student_card();

  return 0;
}