#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time(int hr = 0, int min = 0, int sec = 0)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    Time add(Time a, Time b)
    {
        Time temp;
        temp.hr = a.hr + b.hr;
        temp.min = a.min + b.min;
        temp.sec = a.sec + b.sec;

        if (temp.sec >= 60)
        {
            temp.min += temp.sec / 60;
            temp.sec = temp.sec % 60;
        }
        if (temp.min >= 60)
        {
            temp.hr += temp.min / 60;
            temp.min = temp.min % 60;
        }
        return temp;
    }
    void display()
    {
        cout << "HH:MM:SS = " << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time hunter1(3, 22, 48), hunter2(2, 30, 35), hunter3;
    cout << "Two times are:" << endl;
    hunter1.display();
    hunter2.display();
  hunter3 = hunter3.add(hunter1, hunter2);
    cout << "SUM is:" << endl;
    hunter3.display();
    return 0;
}