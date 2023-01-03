#include <iostream>
#include <stack>

using namespace std;

// Stack: Last In First Out

int main()
{
    stack<string> s;

    // Insert an element
    s.push("Bhanuj");
    s.push("Is");
    s.push("King");

    cout << "Element on top should be last one insterted \"" << s.top() << "\"" << endl;

    // Removes the Last inserted element
    s.pop();
    cout << "The new top should be \"" << s.top() << "\"" << endl;

    cout << "The size of stack is " << s.size() << endl;

    cout << "Empty or not? " << s.empty() << endl;

    return 0;
}