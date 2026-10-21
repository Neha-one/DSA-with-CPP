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
  void removeCycle()
  {
    bool isCycle = false;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        isCycle = true;
        break;
      }
    }
    if (!isCycle)
      return;

    slow = head;
    if (slow == fast)
    {
      while (fast->next != slow)
        fast = fast->next;
    }
    else
    {
      while (fast->next != slow->next)
      {
        slow = slow->next;
        fast = fast->next;
      }
    }
    fast->next = NULL;
  }
  void printList()
  {
    print(head);
  }
  void print(Node *temp)
  {
    if (temp == NULL)
    {
      return;
    }
    cout << temp->data << " ";
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
  ll.tail->next = ll.head;
  ll.removeCycle();
  ll.printList();
  return 0;
}