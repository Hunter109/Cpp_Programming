#include <iostream>
using namespace std;
class hunter
{
  int x;
  int y;

public:
  hunter() {}
  hunter(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  void display()
  {
    cout << "the value of x =" << x << endl;
    cout << "the value of y =" << y << endl;
  }
  friend hunter operator++(hunter);
  friend hunter operator--(hunter);
};
hunter operator++(hunter h)
{
  hunter wagle;
  wagle.x = ++h.x;
  wagle.y = ++h.y;
  return wagle;
}
hunter operator--(hunter a)
{
  hunter obj;
  obj.x = --a.x;
  obj.y = --a.y;
  return obj;
}
int main()
{
  hunter xd(5, 6), utsav;
  xd.display();
  utsav = ++xd;
  utsav.display();
  utsav = --xd;
  utsav.display();

  return 0;
}