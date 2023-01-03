#include <stdio.h>

// Print address of 2nd Last Node of the LL

struct Node
{
  int data;
  struct Node *next;
};

struct Node *IIndLastNode(struct Node *p)
{
  struct Node *q;
  while (p->next != NULL)
  {
    q = p;
    p = p->next;
  }
  return q;
}

int main()
{
  struct Node a = {10, NULL};
  struct Node b = {20, NULL};
  struct Node c = {30, NULL};
  struct Node d = {40, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;

  struct Node *head = &a;

  struct Node *ans = IIndLastNode(head);
  printf("%p", ans);
}