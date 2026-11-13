#include <iostream>
#include <deque>
using namespace std;
class Stack
{
  deque<int> deq;

public:
  void push(int data)
  {
    deq.push_back(data);
  }
  void pop()
  {
    if (deq.empty())
    {
      cout << "stack is empty." << endl;
      return;
    }
    deq.pop_back();
  }
  int top()
  {
    if (deq.empty())
    {
      cout << "stack is empty." << endl;
      return -1;
    }
    return deq.back();
  }
  bool empty()
  {
    return deq.empty();
  }
};
int main()
{
  Stack s;
  for (int i = 1; i <= 5; i++)
  {
    s.push(i);
  }
  while (!s.empty())
  {
    cout << s.top()<<" ";
    s.pop();
  }
  return 0;
}