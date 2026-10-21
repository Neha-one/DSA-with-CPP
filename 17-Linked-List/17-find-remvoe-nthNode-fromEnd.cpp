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
  void printList()
  {
    print(head);
  }
  void removeANDdelete(int n)
  {
    Node *prev = head;
    int size = sizeOfLL();
    if (n <= 0 || n > size)
    {
      cout << "not existed" << endl;
      return;
    }
    if (n == size)
    {

      Node *temp = head;
      head = head->next;
      cout << "going to delete " << temp->data << endl;
      delete temp;

      if (head == NULL)
        tail = NULL;
      return;
    }

    for (int i = 1; i < (size - n); i++)
    {
      prev = prev->next;
    }
    Node *toDel = prev->next;
    prev->next = prev->next->next;

    cout << "going to delete " << toDel->data << endl;

    if (toDel == tail)
    {
      tail = prev;
    }
    delete toDel;
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
  ll.removeANDdelete(5);
  ll.printList();
  cout << "NULL" << endl;

  return 0;
}