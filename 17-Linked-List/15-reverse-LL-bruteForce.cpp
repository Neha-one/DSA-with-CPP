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
  void reverseLL()
  {
    Node *temp = head;
    vector<int> arr;
    while (temp != NULL)
    {
      arr.push_back(temp->data);
      temp = temp->next;
    }
    temp = head;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
      temp->data = arr[i];
      temp = temp->next;
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
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();
  cout << "NULL" << endl;
  ll.reverseLL();
  ll.printList();
  cout << "NULL" << endl;
  return 0;
}