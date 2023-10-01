#include <iostream>
using namespace std;
template <class t>
void sort(t arr[], t num)
{
    for (t i = 0; i < (num); i++)
    {
        for (t j = i + 1; j < (num); j++)
        {
            if (arr[i] < arr[j])
            //<thulo sno
            //> sano thulo
            {
                t temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int num, arr[20];
    cout << "Enter the Size of array : " << endl;
    cin >> num;
    cout << "Enter " << num << " Numbers: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    sort(arr, num);
    cout << "array after short " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}