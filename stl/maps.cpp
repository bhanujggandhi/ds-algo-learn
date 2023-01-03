#include <iostream>
#include <map>

using namespace std;

// Map: Data is stored in key-value.
// Keys are unique and can point to only one value

int main()
{
    map<int, string> m;
    m[1] = "Bhanuj";
    m[2] = "Gandhi";
    m[3] = "King";

    for (auto x : m)
    {
        cout << x.first << " ";
    }
    cout << endl;

    for (auto x : m)
    {
        cout << x.second << " ";
    }
    cout << endl;

    m.insert({5, "Priyanka"});
    cout << m[5] << endl;

    cout << "Finding 5 -> " << m.count(5) << endl;
    cout << "Finding -5 -> " << m.count(-5) << endl;

    m.erase(5);
    cout << m[5] << endl; // Prints nothing

    auto it = m.find(3);

    for (auto i = it; i != m.end(); i++)
    {
        cout << i->second << " ";
    }
    cout << endl;
}