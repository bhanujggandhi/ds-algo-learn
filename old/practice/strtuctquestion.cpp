#include <iostream>
using namespace std;

struct Bhanuj
{
    int name;
    int roll_number;
};

int main()
{
    struct Bhanuj obj, *obj1, **obj2;

    obj.name = 20;
    obj.roll_number = 9;

    obj1 = &obj;
    obj2 = &obj1;

    cout << "Name and roll numbers are", *obj2->name;
}