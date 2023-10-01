#include<iostream>
#include<cstring>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"Enter String : "<<endl;
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str<<endl;
                }
                String operator+(String a) 
                {
                        String xd;
                        strcat(str,a.str);
                        strcpy(xd.str,str);
                        return xd;
                }
};
int main()
{
        String hunter, utsav, wagle;

        hunter.accept_string();
        utsav.accept_string();

        cout<<" First String is   :  ";
        hunter.display_string();   

        cout<<"Second String is  :  ";
        utsav.display_string();  

      
        wagle=hunter+utsav;         
        cout<<" Concatenated String is :  ";
        wagle.display_string();

        return 0;
}