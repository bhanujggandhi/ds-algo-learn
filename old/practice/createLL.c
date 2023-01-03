#include <stdio.h>

int main()
{
  struct Node
  {
    int n;
    struct Node *next;
  };

  struct Node a = {10, NULL};
  struct Node b = {20, NULL};
  struct Node c = {30, NULL};
  struct Node d = {40, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;

  struct Node *head = &a;
  struct Node *p = &a;

  while (p != NULL)
  {
    printf("%d -> ", p->n);
    p = p->next;
  }
  printf("NULL\n");
}