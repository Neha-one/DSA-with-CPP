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
  void deleteNnodes(int m, int n)
  {
    Node *temp = head;
    while (temp != NULL)
    {

      for (int i = 1; i < m - 1 && temp != NULL; i++)
      {
        temp = temp->next;
      }
      if (temp == NULL)
        return;
      for (int i = 0; i < n && temp->next != NULL; i++)
      {
        Node *toDel = temp->next;
        temp->next = toDel->next;
        if (toDel == tail)
        {
          tail = temp;
        }
        delete toDel;
      }
      temp = temp->next;
    }
  }
  void PrintList()
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
  ll.push_back(10);
  ll.push_back(20);
  ll.push_back(30);
  ll.push_back(40);
  ll.push_back(50);
  ll.push_back(60);
  ll.push_back(70);
  ll.deleteNnodes(2, 1);
  ll.PrintList();
  return 0;
}