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
  int helper(Node *temp, int key)
  {
    if (temp == NULL)
    {
      return -1;
    }
    if (temp->data == key)
    {
      return 0;
    }
    int idx = helper(temp->next, key);
    if (idx == -1)
    {
      return -1;
    }
    else
      return idx + 1;
  }
  void recursiveSearch(int key)
  {
    cout << helper(head, key);
  }
};
int main()
{
  List ll;
  ll.push_front(55);
  ll.push_front(44);
  ll.push_front(33);
  ll.recursiveSearch(445);
  return 0;
}