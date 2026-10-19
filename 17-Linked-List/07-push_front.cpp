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
};
class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }
  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
  void printList()
  {
    print(head);
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
  List ll;
  ll.push_front(55);
  ll.push_front(44);
  ll.push_front(33);
  ll.printList();
  return 0;
}