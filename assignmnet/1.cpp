#include <iostream>
using namespace std;

class Hunter
{
public:
    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    int num1;
    cout << "enter the number " << endl;
    cin >> num1;
    Hunter h1;
    cout << "cube of guven integer " << h1.cube(num1);
    return 0;
}
