// Program 25: Write a program to add two Times expressed in hours, minutes
// and seconds using operator overloading.
#include <iostream>
using namespace std;
class times
{
    int hr;
    int min;
    int sec;

public:
    times(int hr, int min, int sec)
    {
       this->hr = hr;
        this->min = min;
        this->sec= sec;
    }
    void operator+(times o2)
    {
        int xd;
        hr += o2.hr;
        min += o2.min;
        if (min >= 60)
        {
            xd = 0;
            xd = min / 60;
            hr += xd;
            min -= xd * 60;
        }
        sec += o2.sec;
        if (sec >= 60)
        {
            xd = 0;
            xd = sec / 60;
            min += xd;
            sec -= 60 * xd;
        }
        cout << "Addition of times is:" << endl;
    
         cout << "Hrs: " << hr << " Min: " << min << " Sec:" << sec<< endl;
    
    }
};
int main()
{
    times hunter(4,55,60), hunter1(3,53,22);
    hunter+hunter1;
    return 0;
}