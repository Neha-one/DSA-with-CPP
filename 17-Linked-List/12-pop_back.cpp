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
  void pop_back()
  {
    if (head == NULL)
    {
      cout << "LL is empty " << endl;
    }
    if (head == tail)
    {
      delete head;
      head = tail = NULL;
      return;
    }
    Node *temp = head;
    while (temp->next != tail)
    {
      temp = temp->next;
    }
    tail->next = NULL;
    delete tail;
    tail = temp;
    tail->next = NULL;
  }
  void printList()
  {
    print(head);
  }
  void print(Node *temp)
  {
    if (temp == NULL)
      return;
    cout << temp->data << " ";
    print(temp->next);
  }
};
int main()
{
  List ll;
  ll.push_front(55);
  ll.push_front(44);
  ll.push_front(33);
  ll.printList();
  cout << endl;
  ll.pop_back();
  ll.printList();
  cout << endl;
  ll.pop_back();
  ll.printList();
  return 0;
}