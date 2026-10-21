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
  void iterativeSearch(int key)
  {
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
      if (temp->data == key)
      {
        cout <<"key found at index "<< i;
        return;
      }
      else
      {
        temp = temp->next;
        i++;
      }
    }
    cout << "key doesn't exists" << endl;
  }
};
int main()
{
  List ll;
  ll.push_front(55);
  ll.push_front(44);
  ll.push_front(33);
  ll.iterativeSearch(33);
  return 0;
}