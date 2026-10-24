#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
  T data;
  Node *next;
  Node(T val)
  {
    data = val;
    next = NULL;
  }
};
template <class T>
class Stack
{
public:
  Node<T> *head;
  Node<T> *tail;
  Stack()
  {
    head = tail = NULL;
  }
  void push(T val)
  {
    Node<T> *newNode = new Node<T>(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      Node<T> *temp = head;
      newNode->next = head;
      head = newNode;
    }
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "stack is empty" << endl;
      return;
    }
    else
    {
      Node<T> *temp = head;
      head = head->next;
      if (head == NULL)
      {
        tail = NULL;
      }
      delete temp;
    }
  }
  T top()
  {
    if (isEmpty())
    {
      throw runtime_error("Stack is empty");
    }
    else
    {
      return head->data;
    }
  }
  bool isEmpty()
  {
    if (head == NULL)
    {
      return true;
    }
    else
      return false;
  }
};
int main()
{
  Stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  while (!s.isEmpty())
  {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}
