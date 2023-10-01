#include <iostream>
#include <cmath>
using namespace std;
class time
{
	int hr;
	int min;
	int sec;

public:
	time() {}
	time(int a, int b, int c)
	{
		hr = a;
		min = b;
		sec = c;
	}
	void display()
	{
		cout << "Hr: " << hr << endl
			 << "Min: " << min << endl
			 << "Sec: " << sec << endl;
	}
	time operator+(time o1)
	{
		hr = hr+ o1.hr;
		min = min+ o1.min;
		if (min >= 60)
		{
			hr += min / 60;
			min = min % 60;
		}
	sec =	sec + o1.sec;
		if (sec >= 60)
		{
			min += (sec / 60);
			sec = sec%60;
		}
		return *this;
	}
};
int main()
{
	time o1(1, 34, 55), o2(3, 53, 34),o3;
	o1.display();
	o2.display();
	o1 + o2;
	o1.display();
	return 0;
}
