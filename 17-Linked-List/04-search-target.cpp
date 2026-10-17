#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  bool lookup(Node *head, int target)
  {
    if (head->data == target)
    {
      return true;
    }
    if (head == NULL)
      return false;
    lookup(head->next, target);
  }
};

int main()
{
  Node *a = new Node(15);
  Node *b = new Node(150);
  Node *c = new Node(160);
  Node *d = new Node(152);

  a->next = b;
  b->next = c;
  c->next = d;

  cout << (a->lookup(a, 15));

  return 0;
}