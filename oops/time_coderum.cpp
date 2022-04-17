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

    // Object contains only data, so objects are much smaller. Compiler creates one copy of member functions of the class and every object of that class refers to that copy of function members only.
    // Every object has it's own memory for variables and refers to the common copy for member functions
    cout << "Size of the object includes just data variables and not function: " << sizeof(t) / sizeof(int) << endl;
}