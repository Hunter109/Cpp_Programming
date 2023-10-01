#include <iostream>
using namespace std;
void sort(int arr[], int num)
{
    for (int i = 0; i < (num - 1); i++)
    {
        for (int j = 0; j < (num - i - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            // if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
        cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}