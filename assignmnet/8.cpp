// : Write a program to create a class called Room in which data items
// are length, breadth and height. Create an array of objects in the room. And
// finds its area and volume
#include <iostream>
using namespace std;
class Room
{
private:
    float length;
    float breadth;
    float height;

public:
    void data()
    {
        cout << "enter the length of romm : ";
        cin >> length;
        cout << "enter the breath of romm : ";
        cin >> breadth;
        cout << "enter the height of romm : ";
        cin >> height;
        cout << endl;
    }
    void area()
    {
        float area;
        area = length * breadth;
        cout << "the area of romm : " << area;
        cout<<endl;
    }
    void volume();
};
void Room::volume()
{
    float volume;
    volume = length * breadth * height;
    cout << "the volume of room : " << volume;
    cout<<endl;
}
int main()
{
    int *num = new int;;

    cout<<"enter the total number of array of object you want to store "<<endl;
    cin>>*num;
    Room hunter[*num];
  



 
    for (int i = 0; i < *num; i++)
    {
        cout << "data entry of " << i + 1 << " object" << endl;
    hunter[i].data();
        cout << "area of " << i + 1 << " object" << endl;
        hunter[i].area();
        cout << "volume of " << i + 1 << " object" << endl;
        hunter[i].volume();
    } 
 delete num;

    return 0;
}