#include <iostream>
using namespace std;
class utsav
{
public:
    void get_data();
};
class sirjana : public utsav
{
public:
    void get_data();
};
class laxmi : public sirjana
{
public:
    void get_data();
};

void utsav ::get_data()
{
    cout << "function of utsav";
}
void sirjana::get_data()
{
    cout << "function of sirjana";
}
void laxmi ::get_data()
{
    cout << "function of laxmi";
}

int main()
{
     laxmi a1;
     a1.utsav::get_data();

    return 0;
}