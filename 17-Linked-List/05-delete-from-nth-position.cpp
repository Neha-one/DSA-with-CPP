#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
  void deletefromNthPosition(Node *head, int i, int n)
  {
    if (head == NULL)
      return;
    if (i == n - 1)
    {
      head->next = NULL;
      return;
    }
    deletefromNthPosition(head->next, i + 1, n);
  }
  void printVal(Node *head)
  {
    if (head == NULL)
      return;
    cout << head->data << " ";
    printVal(head->next);
  }
};
int main()
{
  Node *a = new Node(5);
  Node *b = new Node(10);
  Node *c = new Node(15);
  Node *d = new Node(20);
  a->next = b;
  b->next = c;
  c->next = d;
  int n = 1;
  a->deletefromNthPosition(a, 0, n);
  a->printVal(a);
  return 0;
}