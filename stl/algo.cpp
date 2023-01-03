#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(12);
    v.push_back(13);

    cout << "Finding 2 using BS -> " << binary_search(v.begin(), v.end(), 2) << endl;

    cout << "Finding 9 using BS -> " << binary_search(v.begin(), v.end(), 2) << endl;

    cout << "Lower Bound\t" << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    cout << "Upper Bound\t" << upper_bound(v.begin(), v.end(), 14) - v.begin() << endl;

    int a = 2, b = 10;
    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "Value of a after swapping -> " << a << endl;

    string str = "bhanuj";
    reverse(str.begin(), str.end());
    cout << "Revered String -> " << str << endl;

    cout << "Before rotating\n";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Left rotation
    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After left rotating\n";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Right rotation means left rotating n-1 times
    rotate(v.begin(), v.begin() + v.size() - 1, v.end());

    cout << "After right rotating again\n";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Before Sorting: \n";
    rotate(v.begin(), v.begin() + 3, v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "After Sorting : \n";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}