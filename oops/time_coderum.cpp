#include <iostream>

#include "Time.h"
#include "Time.cpp"

using namespace std;

int main()
{
    Time t;

    cout << "The initial universal time is ";
    t.printUniversal();
    cout << endl;

    cout << "The initial standard time is ";
    t.printStandard();
    cout << endl
         << endl;

    t.setTime(13, 27, 6);

    cout << "The universal time after setTime is ";
    t.printUniversal();
    cout << endl;

    cout << "The standard time after setTime is ";
    t.printStandard();
    cout << endl
         << endl;

    try
    {
        t.setTime(99, 99, 99);
    }
    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
}