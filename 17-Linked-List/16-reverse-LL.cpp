#include <iostream>
#include <vector>
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
  void reverseLL()
  {
    Node *curr = head;
    Node *prev = NULL;
    Node *Next;
    tail = curr;
    while (curr != NULL)
    {
      Next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = Next;
    }
    head = prev;
  }
  void printList()
  {
    print(head);
  }
  void print(Node *temp)
  {
    if (temp == NULL)
      return;
    cout << temp->data << "->";
    print(temp->next);
  }
};
int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();
  cout << "NULL" << endl;
  ll.reverseLL();
  ll.printList();
  cout << "NULL" << endl;
  return 0;
}