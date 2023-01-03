#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

Node *sortedMerge(Node *head1, Node *head2)
{
  Node *newStart = new Node(-1);
  Node *curr = newStart;

  Node *s = head1;
  Node *p = head2;

  while (s != NULL and p != NULL)
  {
    if (s->data <= p->data)
    {
      curr->next = s;
      s = s->next;
    }
    else
    {
      curr->next = p;
      p = p->next;
    }
    curr = curr->next;
  }

  while (s != NULL)
  {
    curr->next = s;
    s = s->next;
    curr = curr->next;
  }
  while (p != NULL)
  {
    curr->next = p;
    p = p->next;
    curr = curr->next;
  }

  curr->next = NULL;

  return newStart->next;
}

void printList(Node *ans)
{
  while (ans != NULL)
  {
    cout << ans->data << "->";
    ans = ans->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *head1 = new Node(1);
  Node *s = head1;
  s->next = new Node(2);
  s = s->next;
  s->next = new Node(5);
  s = s->next;
  s->next = new Node(12);
  s = s->next;
  s->next = new Node(13);
  s = s->next;

  Node *head2 = new Node(4);
  s = head2;
  s->next = new Node(6);
  s = s->next;
  s->next = new Node(7);
  s = s->next;
  s->next = new Node(8);
  s = s->next;
  s->next = new Node(9);
  s = s->next;
  s->next = new Node(10);
  s = s->next;
  s->next = new Node(11);
  s = s->next;
  s->next = new Node(18);

  printList(head1);
  printList(head2);

  Node *ans = sortedMerge(head1, head2);

  printList(ans);
}