#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Iterative approach
Node *listReverse(Node *head)
{
    Node *prev = NULL, *curr = head, *nextN = NULL;

    while (curr != NULL)
    {
        nextN = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextN;
    }

    head = prev;
    return head;

    // Only one loop so, O(n)
}

// Recursive approach
Node *listReverseRec(Node *head) // T(n)
{
    if (head == NULL or head->next == NULL)
        return head;
    else
    {
        Node *rest = listReverseRec(head->next); // T(n-1)
        head->next->next = head;                 // O(1)

        head->next = NULL; // O(1)

        return rest;
    }

    // T(n) = T(n-1) + c
    // So, O(n)
}

// Stack Based approach
Node *reverseStackBased(Node *head)
{
    stack<Node *> s;
    Node *temp = head;

    while (temp->next != NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    head = temp;
    while (!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;

    return head;
}

int main()
{
    Node *head = new Node(1);
    Node *s = head;
    s->next = new Node(2);
    s = s->next;
    s->next = new Node(3);
    s = s->next;
    s->next = new Node(4);
    s = s->next;
    s->next = new Node(5);
    s = s->next;
    s->next = new Node(6);
    s = s->next;
    s->next = new Node(7);
    s = s->next;
    s->next = new Node(8);

    printList(head);

    // Node *head2 = listReverse(head);
    // Node *head2 = listReverseRec(head);
    Node *head2 = reverseStackBased(head);
    printList(head2);

    return 0;
}