#include <iostream>
#include <set>

using namespace std;

// Set: Stores all the unique elements
// Implemented using BST. No modification:- either insert or delete
// Stored in sorted order.
// Insertion time is BST insertion time O(n) and deletion time is BST deletion time O(n)

void printSet(set<int> s)
{
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    printSet(s);

    // Stores only unique element. After below operations set will remain the same
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(0);
    s.insert(6);
    s.insert(0);
    s.insert(6);
    s.insert(0);
    s.insert(6);
    s.insert(0);

    printSet(s);

    set<int>::iterator it = s.begin();
    s.erase(++it);

    printSet(s);

    // We know set will store only unique elements. If it returns one then it will be present if return zero then not present
    cout << "Is 5 present? " << s.count(5) << endl;
    cout << "Is -5 present? " << s.count(-5) << endl;

    // Returns address of the key if present
    set<int>::iterator itr = s.find(5);
    cout << *itr << endl;

    // Returns pointer next to last element
    itr = s.find(-5);
    cout << *itr << endl;
}