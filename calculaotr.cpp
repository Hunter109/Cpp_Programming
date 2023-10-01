#include <iostream>
using namespace std;
int main()
{
    char xd ;
    cout << "enter tw operator u want to use";
    cin >> xd;
    int a, b;
    cout << "enter two number u want to use";
    cin >> a >> b;
    switch (xd)
    {
    case '+':
        cout << a + b;

        break;
    case '*':
        cout << a * b;

        break;
    case '-':
        cout << a - b;

        break;
    case '%':
        cout << a % b;

        break;
    }
    return 0;
}