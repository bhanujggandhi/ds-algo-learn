#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Time.h"

using namespace std;

Time::Time()
{
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
    if ((h >= 0 and h < 24) and (m >= 0 and m < 60) and (s >= 0 and s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
        throw invalid_argument("Hour, Minute, and/or second was out of range");
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard()
{
    cout << ((hour == 0 or hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
}