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

Node *segregate(Node *head)
{

  Node *zeroStart = new Node(-1);

  Node *oneStart = new Node(-1);

  Node *twoStart = new Node(-1);

  Node *s = head;
  Node *currZero = zeroStart, *currOne = oneStart, *currTwo = twoStart;

  while (s != NULL)
  {
    if (s->data == 0)
    {
      currZero->next = s;
      currZero = currZero->next;
    }
    else if (s->data == 1)
    {
      currOne->next = s;
      currOne = currOne->next;
    }
    else if (s->data == 2)
    {
      currTwo->next = s;
      currTwo = currTwo->next;
    }

    s = s->next;
  }

  currZero->next = (oneStart->next) ? (oneStart->next) : twoStart->next;
  currOne->next = twoStart->next;
  currTwo->next = NULL;

  head = zeroStart->next;

  delete zeroStart;
  delete oneStart;
  delete twoStart;

  return head;
}

void printList(Node *ans)
{
  while (ans != NULL)
  {
    cout << ans->data << "->";
    ans = ans->next;
  }
  cout << "NULL";
}

int main()
{
  Node *head = new Node(1);
  Node *s = head;
  s->next = new Node(2);
  s = s->next;
  s->next = new Node(0);
  s = s->next;
  s->next = new Node(0);
  s = s->next;
  s->next = new Node(1);
  s = s->next;
  s->next = new Node(1);
  s = s->next;
  s->next = new Node(2);
  s = s->next;
  s->next = new Node(2);
  s = s->next;
  s->next = new Node(2);
  s = s->next;
  s->next = new Node(0);
  s = s->next;
  s->next = new Node(1);
  s = s->next;
  s->next = new Node(0);

  Node *ans = segregate(head);

  printList(ans);

  return 0;
}