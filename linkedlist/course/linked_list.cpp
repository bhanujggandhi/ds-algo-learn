#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_front(2);
    l.push_front(1);
    l.push_back(3);
    l.insert(9, 2);
    l.insert(0, 0);
    // l.pop_front();
    // l.pop_back();
    // l.remove(4);

    Node *head = l.begin();

    while (head != NULL)
    {
        cout << head->getData() << "->";
        head = head->next;
    }

    cout << "NULL" << endl;

    if (l.search(2))
    {
        cout << "Yes present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    if (l.search(10))
    {
        cout << "Yes present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    if (l.searchRecursive(l.begin(), 2))
    {
        cout << "Yes present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    if (l.searchRecursive(l.begin(), 10))
    {
        cout << "Yes present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    l.reverse();
    Node *head1 = l.begin();

    while (head1 != NULL)
    {
        cout << head1->getData() << "->";
        head1 = head1->next;
    }

    cout << "NULL" << endl;

    return 0;
}