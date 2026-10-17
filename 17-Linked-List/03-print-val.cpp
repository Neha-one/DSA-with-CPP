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
  void print(Node *head)
  {
    if (head == NULL)
      return;
    cout << head->data << " ";
    print(head->next);
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

  // it will print from a to d.
  a->print(a);

  return 0;
}