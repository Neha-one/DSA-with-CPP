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
  Node *splitAtMid(Node *head)
  {
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
    if (prev != NULL)
    {
      prev->next = NULL;
    }
    return slow;
  }
  Node *reverseLL(Node *rightHead)
  {
    Node *prev = NULL;
    Node *curr = rightHead;
    while (curr != NULL)
    {
      Node *Next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = Next;
    }
    return prev;
  }
  void merging(Node *head, Node *rightHead)
  {
    Node *left = head;
    Node *right = rightHead;
    Node *tail = right;
    while (left != NULL && right != NULL)
    {
      Node *nextleft = left->next;
      Node *nextright = right->next;
      left->next = right;
      right->next = nextleft;
      tail = right;
      left = nextleft;
      right = nextright;
    }
    while (right != NULL)
    {
      tail->next = right;
      tail = right;
      right = right->next;
    }
    print(head);
  }
  void zigZagLL()
  {
    Node *rightHead = splitAtMid(head);
    Node *rightHeadrev = reverseLL(rightHead);
    merging(head, rightHeadrev);
  }
};

int main()
{
  List ll;
  ll.push_back(2);
  ll.push_back(4);
  ll.push_back(6);
  ll.push_back(8);
  ll.push_back(86);
  ll.zigZagLL();
  // ll.printList();
  return 0;
}