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
  int sizeOfLL()
  {
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
    return count;
  }
  bool palindrone()
  {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
    }
    // Reverse second half
    Node *prev = NULL;
    Node *curr = slow;

    while (curr != NULL)
    {
      Node *Next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = Next;
    }

    // Compare both halves
    Node *left = head;
    Node *right = prev;

    while (right != NULL)
    {
      if (left->data != right->data)
      {
        return false;
      }
      left = left->next;
      right = right->next;
    }
    return true;
  }
};
int main()
{
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  cout << boolalpha << ll.palindrone();
  return 0;
}