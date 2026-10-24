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
class MyLinkedList
{
  Node *head;
  Node *tail;

public:
  MyLinkedList()
  {
    head = tail = NULL;
  }

  int get(int index)
  {
    Node *temp = head;
    for (int i = 0; i < index; i++)
    {
      temp = temp->next;
    }
    return temp->data;
  }

  void addAtHead(int val)
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
  void addAtTail(int val)
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

  void addAtIndex(int index, int val)
  {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (index == 0)
    {
      newNode->next = head;
      head = newNode;
      return;
    }
    if (index < 0)
    {
      return;
    }
    for (int i = 0; i < index - 1; i++)
    {
      temp = temp->next;
    }
    if (temp == tail)
    {
      temp->next = newNode;
      tail = newNode;
      tail->next = NULL;
    }
    else
    {
      newNode->next = temp->next;
      temp->next = newNode;
    }
  }

  void deleteAtIndex(int index)
  {
    if (index == 0)
    {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
      return;
    }
    if (index < 0)
    {
      return;
    }
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
      temp = temp->next;
    }
    Node *toDel = temp->next;
    if (toDel == tail)
    {
      delete tail;
      tail = temp;
      tail->next = NULL;
    }
    else
    {
      temp->next = toDel->next;
      delete toDel;
    }
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

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main()
{
  MyLinkedList dbll;
  dbll.push_back(10);
  dbll.push_back(20);
  dbll.push_back(30);
  dbll.push_back(40);
  dbll.push_back(50);
  cout << "index 2 is : " << dbll.get(2) << endl;
  dbll.addAtHead(5);
  dbll.printList();
  dbll.addAtTail(55);
  dbll.printList();
  dbll.addAtIndex(2, 25);
  dbll.printList();
  dbll.deleteAtIndex(3);
  dbll.printList();
  return 0;
}