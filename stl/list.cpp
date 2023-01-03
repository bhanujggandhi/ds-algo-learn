#include <iostream>
#include <list>

using namespace std;

void printList(list<int> d)
{
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;

    list<int> n(5, 100);
    printList(n);

    // Push at the end
    l.push_back(1);
    // Push at the front
    l.push_front(2);
    printList(l);

    // Erasing first element
    l.erase(l.begin());
    printList(l);

    // Size of the List
    cout << "List size is -> " << l.size() << endl;
}