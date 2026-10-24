#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val)
  {
    data = val;
    next = prev = NULL;
  }
};
class DoublyLL
{
public:
  Node *head;
  Node *tail;
  DoublyLL()
  {
    head = tail = NULL;
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
      Node *temp = head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newNode;
      newNode->prev = temp;
      newNode->next = NULL;
      tail = newNode;
    }
  }
  void printList()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};
int main()
{
  DoublyLL dbll;
  dbll.push_back(10);
  dbll.push_back(20);
  dbll.push_back(30);
  dbll.push_back(40);
  dbll.push_back(50);
  dbll.printList();

  return 0;
}