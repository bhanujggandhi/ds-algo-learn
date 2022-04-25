#include <iostream>
using namespace std;

class Node
{
private:
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(nullptr) {}

    int getData()
    {
        return data;
    }

    friend class List;

    ~Node()
    {
        if (next != nullptr)
        {
            delete next;
            cout << "Deleting Node with Data" << data << endl;
        }
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr) {}

    Node *begin()
    {
        return head;
    }

    Node *end()
    {
        return tail;
    }

    void push_front(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (tail == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    // Insert data next to the x
    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        Node *p = head;
        if (p == NULL)
        {
            return;
        }
        while (--pos)
        {
            p = p->next;
        }
        Node *a = new Node(data);
        a->next = p->next;
        p->next = a;
    }

    // Linear Search
    bool search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
                return true;

            temp = temp->next;
        }

        return false;
    }

    // Recursive Search
    bool searchRecursive(Node *start, int key)
    {
        if (start == NULL)
        {
            return false;
        }
        else
        {
            if (start->data == key)
            {
                return true;
            }
            else
            {
                return searchRecursive(start->next, key);
            }
        }
    }

    // Deleting first node
    void pop_front()
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        Node *p;
        if (temp == nullptr)
            exit(0);
        while (temp->next != nullptr)
        {
            p = temp;
            temp = temp->next;
        }

        // 1->2->3->4->NULL

        tail = p;
        tail->next = nullptr;
        delete temp;
    }

    void remove(int pos)
    {
        Node *temp = head;
        Node *p;

        while (--pos)
        {
            p = temp;
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = nullptr;
        delete temp;
    }

    void reverse()
    {
        if (head == nullptr)
            exit(0);

        tail = head;
        Node *prev = nullptr;
        Node *curr = head;
        Node *nextN = curr->next;

        while (nextN != nullptr)
        {
            curr->next = prev;
            prev = curr;
            curr = nextN;
            nextN = nextN->next;
        }
        curr->next = prev;
        head = curr;
    }

    // Deleting whole list: Whenever delete head will be called Node destructor will run and it will first delete the next recursively thus deleting whole list
    ~List()
    {
        if (head != NULL)
            delete head;
    }
};