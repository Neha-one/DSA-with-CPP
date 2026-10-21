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
      tail->next = newNode;
      tail = newNode;
    }
  }
  void deleteAllList()
  {
    while (head != NULL)
    {
      pop_back();
    }
  }
  void pop_back()
  {
    if (head == NULL)
      return;
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
    cout << temp->data << "->";
    print(temp->next);
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
  cout << "NULL";
  ll.deleteAllList();
  ll.printList();
  return 0;
}