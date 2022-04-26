#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basicArray[3] = {1, 2, 3};
    array<int, 4> arraySTL = {1, 2, 3, 4};

    // size function returns size
    int size = arraySTL.size();
    cout << size << endl;

    // Traverse Array
    for (int i = 0; i < size; i++)
    {
        cout << arraySTL[i] << " ";
    }

    // at(idx) gives the element at idx
    cout << "Element at 2nd Index -> " << arraySTL.at(2) << endl;

    // empty returns boolean value
    cout << "Empty or not? " << arraySTL.empty() << endl;

    // front, back returns first and last element resp.
    cout << "First element -> " << arraySTL.front() << endl;
    cout << "Last element -> " << arraySTL.back() << endl;
}