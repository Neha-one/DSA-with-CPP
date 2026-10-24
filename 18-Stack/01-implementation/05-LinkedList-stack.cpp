#include <iostream>
#include <list>
#include <vector>
using namespace std;

template <class T>
class Stack
{
  list<T> ll;

public:
  void push(T val)
  {
    ll.push_front(val);
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
      ll.pop_front();
    }
  }
  T top()
  {
    if (isEmpty())
    {
      cout << "stack is empty " << endl;
      // return -1;
    }
    else
    {
      return ll.front();
    }
  }
  bool isEmpty()
  {
    return ll.size() == 0;
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
};