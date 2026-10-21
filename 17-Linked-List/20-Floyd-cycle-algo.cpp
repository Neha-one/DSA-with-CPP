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
  bool isCycle()
  {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        cout << "cycle exist" << endl;
        return true;
      }
    }
    cout << "cycle doesn't exist " << endl;
    return false;
  }
};
int main()
{
  List ll;
  ll.push_back(2);
  ll.push_back(4);
  ll.push_back(6);
  ll.push_back(8);
  // ll.tail->next = ll.head;
  cout << boolalpha << ll.isCycle();
  return 0;
}