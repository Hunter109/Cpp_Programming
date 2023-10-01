#include <iostream>
using namespace std;
class Mountain
{
    string name;
    float height;
    string location;

public:
    Mountain() {}
    Mountain(string name, float height, string location)
    {
        this->name = name;
        this->height = height;
        this->location = location;
    }
    void CmpHeight(Mountain);

    void displayinf();
};

void Mountain::CmpHeight(Mountain b)
{

    if (height > b.height)
    {
        displayinf();
    }
    else if(height<b.height)
    {
        b.displayinf();
    }
   
}
void Mountain::displayinf()
{
    cout << "the information of the mountain which is of greatest height : " << endl;
    cout << "name of mountain : " << name << endl;
    cout << "height of mountain : " << height << endl;
    cout << "address of mounatain : " << location << endl;
}
int main()
{
    Mountain Hunter("EVEREST", 8848, "nepal");
    Mountain Hunter1("kailash parvat", 6638, "india");
 
    Hunter.CmpHeight(Hunter1);
   

    return 0;
}