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
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      head = newNode;
    }
    newNode->next = head;
    head = newNode;
  }
  void printList()
  {
    print(head);
  }
  void print(Node *head)
  {
    if (head == NULL)
      return;
    cout << head->data << endl;
    print(head->next);
  }
};
int main()
{
  List ll;
  ll.push_back(2);
  ll.push_back(4);
  ll.push_back(6);
  ll.push_back(8);
  ll.printList();
  return 0;
}