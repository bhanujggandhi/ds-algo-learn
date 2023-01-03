#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

void printList(Node *ans)
{
  while (ans != NULL)
  {
    cout << ans->data << "->";
    ans = ans->next;
  }
  cout << "NULL" << endl;
}

int lPalin(Node *A)
{
  // Find the middle element
  Node *mid = A;
  Node *curr = A;
  while (curr->next != NULL and curr->next->next != NULL)
  {
    curr = curr->next->next;
    mid = mid->next;
  }

  Node *prev = NULL;
  curr = mid->next;
  Node *next = curr->next;

  while (next != NULL)
  {
    curr->next = prev;
    prev = curr;
    curr = next;
    next = next->next;
  }
  curr->next = prev;
  mid->next = NULL;

  Node *newHead = curr;
  Node *p = A;

  while (curr != NULL)
  {
    if (curr->data != p->data)
      return 0;
    curr = curr->next;
    p = p->next;
  }
  return 1;
}

int main()
{
  Node *head = new Node(8);
  Node *s = head;
  s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(3);
  // s = s->next;
  // s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(3);
  // s = s->next;
  // s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(2);
  // s = s->next;
  // s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(0);
  // s = s->next;
  // s->next = new Node(1);
  // s = s->next;
  // s->next = new Node(0);

  printList(head);
  cout << lPalin(head) << endl;

  return 0;
}