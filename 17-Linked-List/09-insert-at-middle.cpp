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
public:
  Node *head;
  Node *tail;
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
  void insert(int val, int pos)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {

      Node *temp = head;
      for (int i = 0; i < pos - 1; i++)
      {
        temp = temp->next;
      }
      newNode->next = temp->next;
      temp->next = newNode;
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
  ll.push_back(10);
  ll.push_back(20);
  ll.push_back(30);
  ll.push_back(40);
  ll.insert(25, 2);
  ll.printList();
  return 0;
}