// Demonstrating the class member acess operators . and ->

#include <iostream>
using namespace std;

// class Count definition
class Count
{
public:
    void setX(int value)
    {
        x = value;
    }

    void print()
    {
        cout << x << endl;
    }

private:
    int x;
};

int main()
{
    Count counter;                // counter object
    Count *counterPtr = &counter; // Pointer to counter
    Count &counterRef = counter;  // Reference to counter

    cout << "Accessing setX using object's name " << endl;
    counter.setX(1);
    counter.print();

    cout << "Accessing setX using counterRef reference of the the counter object" << endl;
    counterRef.setX(2);
    counterRef.print();

    cout << "Accessing setX using pointer to counter object" << endl;
    counterPtr->setX(3);
    counterPtr->print();
}