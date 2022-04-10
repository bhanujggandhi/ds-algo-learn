#include <iostream>
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

Node *findMid(Node *head)
{
  Node *p = head, *q = head;
  if (p == NULL)
    return NULL;

  if (p->next == NULL)
    return p;

  while (p != NULL and p->next != NULL)
  {
    p = p->next->next;
    q = q->next;
  }

  return q;
}

Node *merge2Lists(Node *left, Node *right)
{
  if (left == NULL)
  {
    return right;
  }

  if (right == NULL)
  {
    return left;
  }

  Node *temp = new Node(-1);
  Node *ans = temp;

  while (left != NULL and right != NULL)
  {
    if (left->data < right->data)
    {
      temp->next = left;
      left = left->next;
    }
    else
    {
      temp->next = right;
      right = right->next;
    }
    temp = temp->next;
  }

  while (left != NULL)
  {
    temp->next = left;
    left = left->next;
    temp = temp->next;
  }

  while (right != NULL)
  {
    temp->next = right;
    right = right->next;
    temp = temp->next;
  }

  ans = ans->next;
  return ans;
}

// Function to sort the given linked list using Merge Sort.
Node *mergeSort(Node *head)
{
  // base
  if (head == NULL or head->next == NULL)
    return head;

  // mid
  Node *mid = findMid(head);

  Node *right = mid->next;
  Node *left = head;
  mid->next = NULL;

  left = mergeSort(left);
  right = mergeSort(right);

  Node *ans = merge2Lists(left, right);

  return ans;
}

int main()
{
  Node *s;
  Node *head = new Node(4);
  s = head;
  s->next = new Node(11);
  s = s->next;
  s->next = new Node(7);
  s = s->next;
  s->next = new Node(18);
  s = s->next;
  s->next = new Node(10);
  s = s->next;
  s->next = new Node(6);
  s = s->next;
  s->next = new Node(8);
  s = s->next;
  s->next = new Node(9);

  printList(head);

  Node *ans = mergeSort(head);

  printList(ans);
}