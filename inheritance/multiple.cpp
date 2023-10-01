#include <iostream>
using namespace std;
class Russia
{
public:
    void acceptWar()
    {
        cout << "from russia " << endl;
    }
};
class Ukraine
{
public:
    void acceptWar()
    {
        cout << "from Ukraine " << endl;
    }
};
class World : public Russia, public Ukraine
{
public:
    void stopWar()
    {
        cout << " hey please stop war" << endl;
    }
};
int main()
{
    World W1;
    W1.Russia::acceptWar();
    W1.Ukraine::acceptWar();
    W1.stopWar();

    return 0;
}