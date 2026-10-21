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
  ~List()
  {
    Node *temp;
    while (head != NULL)
    {
      temp = head;
      head = head->next;
      delete temp;
    }
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
  return 0;
}