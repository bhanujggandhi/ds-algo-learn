#include <iostream>
#include <vector>

using namespace std;

// Dynamic Array: Whenever arrays fulls, a new vector will be created of double size and all the elements will be copied to the new one and old is destroyed

int main()
{
    vector<int> v;

    // Initialise vector having 5 elements and all elements be 1
    vector<int> a(5, 1);
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    // Creating a vector by copying all the elements of vector "a"
    vector<int> c(a);
    for (auto x : c)
    {
        cout << x << " ";
    }
    cout << endl;

    // Initially no memory is allocated
    cout << "Initial capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "With one element capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "With two elements capacity -> " << v.capacity() << endl;

    v.push_back(3);
    // Now capacity would be doubled to 4
    cout << "With three elements capacity -> " << v.capacity() << endl;

    // size tells the number of elements whereas capacity tells the memory allocated or maximum size before it doubles
    cout << "Size of vector is -> " << v.size() << endl;

    // we can use "at" here like in array
    cout << "2nd element is -> " << v.at(1) << endl;

    // Front, Back also works same as array.
    // front, back returns first and last element resp.
    cout << "First element -> " << v.front() << endl;
    cout << "Last element -> " << v.back() << endl;

    cout << endl
         << "Before Pop" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.pop_back();

    cout << endl
         << "After Pop" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Clear function clears all the elements of vector
    // Note that it does not free the memory, whatever was the size of vector will remain same but size would be zero.
    v.clear();
    cout << "Capacity after clearing -> " << v.capacity() << endl;
    cout << "Size after clearing -> " << v.size() << endl;
}