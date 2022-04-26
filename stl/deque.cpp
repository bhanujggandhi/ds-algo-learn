#include <iostream>
#include <deque>

using namespace std;

// Doubly Ended Queue: Instertion or deletion can be done from front or rear.

void printDeque(deque<int> d)
{
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d;

    // Insert at the rear
    d.push_back(1);

    // Insert at the front
    d.push_front(2);

    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    printDeque(d);

    // Pop from the rear
    d.pop_back();
    printDeque(d);

    // Pop from the start
    d.pop_front();
    printDeque(d);

    // at(idx) function returns element at idc
    cout << "Element at idx 1 is -> " << d.at(1) << endl;

    // front, rear functions returns first and last element resp.
    cout << "First element -> " << d.front() << endl;
    cout << "Last element -> " << d.back() << endl;

    // Empty fucntion tells if deque is empty or not
    cout << "Empty or not? " << d.empty() << endl;

    cout << "Size before erase -> " << d.size() << endl;

    // Erase from Begin address to 2 address forward
    d.erase(d.begin(), d.begin() + 2);
    cout << "Size after erase -> " << d.size() << endl;

    cout << "Deque elements after erase " << endl;
    printDeque(d);

    return 0;
}