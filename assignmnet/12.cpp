
#include <iostream>
using namespace std;
class time
{
public:
    int hr;
    int min;
    int sec;
    void enter()
    {
        cout << "Enter Hour, Minute and Second" << endl;
        cin >> hr;
        cin >> min;
        cin >> sec;
    }
};
class adder : public time
{
public:
    adder add(time o2)
    {
        int rem = 0;
        hr += o2.hr;
        min += o2.min;
        if (min >= 60)
        {
            rem = min / 60;
            hr += rem;
            min -= rem * 60;
        }
        rem = 0;
        sec += o2.sec;
        if (sec >= 60)
        {
            rem = sec / 60;
            min += rem;
            sec -= rem * 60;
        }
        return *this;
    }
    void display()
    {
        cout << "Total time:" << endl;
        cout << "Hrs: " << hr << " Min: " << min << " Sec:" << sec << endl;
    }
    friend class third;
};
class third
{
    int hour;
    int minute;
    int second;

public:
    void enter()
    {
        cout << "Enter Hour, Minute and Second" << endl;
        cin >> hour;
        cin >> minute;
        cin >> second;
    }
    third diff(time o2)
    {
        hour -= o2.hr;
        minute -= o2.min;
        second -= o2.sec;
        if (hour < 0)
        {
            hour = -hour;
        }
        if (minute < 0)
        {
            minute = -minute;
        }
        if (second < 0)
        {
            second = -second;
        }
        return *this;
    }
    void display()
    {
        cout << "Total Difference" << endl;
        cout << "Hrs: " << hour << " Min: " << minute << " Sec:" << second << endl;
    }
};
int main()
{
    time xd;
    xd.enter();
    adder a, b;
    a.enter();
    b = a.add(xd);
    b.display();
    third hunter, hunter_add;
    hunter.enter();
    hunter_add = hunter.diff(xd);
    hunter_add.display();
    return 0;
}