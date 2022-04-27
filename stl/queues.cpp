#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    // Add to rear
    q.push("Bhanuj");
    q.push("Is");
    q.push("King");

    // Front is where deletion happens
    cout << "First element is \"" << q.front() << "\"" << endl;

    // Rear is where insertion happens
    cout << "Last element is \"" << q.back() << "\"" << endl;

    cout << "Size before pop -> " << q.size() << endl;

    // Remove front
    q.pop();
    cout << "New front is \"" << q.front() << "\"" << endl;

    cout << "Size after pop -> " << q.size() << endl;
}