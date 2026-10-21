
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
    head = tail = NULL;
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

  int sizeOfLL(Node *temp)
  {
    int count = 0;

    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }

    return count;
  }

  int lastVal(Node *temp, int pos)
  {
    for (int i = 1; i < pos; i++)
    {
      temp = temp->next;
    }

    return temp->data;
  }

  bool palindrome()
  {
    int size = sizeOfLL(head);
    Node *temp = head;

    for (int i = 0; i < size / 2; i++)
    {
      if (temp->data != lastVal(head, size - i))
      {
        return false;
      }

      temp = temp->next;
    }

    return true;
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
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(2);
  ll.push_front(1);
  cout << boolalpha << ll.palindrome() << endl;

  return 0;
}
