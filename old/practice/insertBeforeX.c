#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void printList(struct Node *a)
{
  struct Node *p = a;

  while (p != NULL)
  {
    printf("%d -> ", p->data);
    p = p->next;
  }
  printf("NULL\n");
}

struct Node *insertBeforeX(struct Node *p, int before, int data)
{
  struct Node *q = p;
  while (p->next->data != before)
  {
    p = p->next;
  }
  if (p == NULL)
  {
    printf("%d is not present in the list\n", data);
    exit(0);
  }
  // printf("%d", p->data);
  if (p->data == before)
  {
    struct Node *z = (struct Node *)malloc(sizeof(struct Node));
    z->data = data;
    z->next = p->next;
    p->next = z;
  }
  return z;
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
  printList(insertBeforeX(head, 30, 25));
}