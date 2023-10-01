#include<iostream>
using namespace std;
template<class a>
void sort(a num,a arr[]){
    for (int i = 0; i < num; i++)

    {
        for (int j = i+1; j < num; j++)
        {
            /* code */
            if (arr[i]<arr[j])
            {
                a temp;
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
            
        }
        
        /* code */
    }
    
}
int main ()
{
float num = 4;
float arr[4];
for (int i = 0; i < num; i++)
{
    cout<<"enter gpa of student  "<<i<<endl;
    cin>>arr[i];
}
sort(num,arr);
cout<<"after sort "<<endl;
for (int i = 0; i < num; i++)
{
    cout<<arr[i]<<endl;
    /* code */
}



return 0;
}