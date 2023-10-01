#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cout<<"enter the size of aary"<<endl;
    cin>>a;
    int num[a][a];
    int num_1[a][a];
    int sum;
    cout<<"for the 1st matrix";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
        cin >> num[i][j];
            
        }
        
    }
    system("cls");

  
     
    cout<<"for second matrix"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
        cin >> num_1[i][j];
            
        }
        
    }
    system("cls");

    
  for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
    {
        cout << num[i][j]<<"\t" ;
        
    }
    cout<<endl;
    
    } 
    cout<<endl<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
    {
        cout << num_1[i][j]<<"\t" ;
        
    }
    cout<<endl;
    
    }

    
   
    return 0;
}