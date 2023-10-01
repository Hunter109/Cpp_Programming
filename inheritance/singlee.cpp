//single inheritance//
#include <iostream>
using namespace std;
class Section
{
    int roll;
    string name;

public:
    Section(int roll, string name)
    {
        this->name = name;
        this->roll = roll;
    }
    void display()
    {
        cout << "your name " << name << endl;
        cout << "your roll number " << roll << endl;
    }
};
class Level : public Section
{
    string level;

public:
    Level(int roll, string name, string level) : Section(roll, name)
    {
        this->level = level;
    }
    void display()
    {
        Section::display();
        cout << "your level " << level << endl;
    }
};
int main()
{
    Level A1(37, "soviyat", "bachelor");
    A1.display();
    return 0;
}