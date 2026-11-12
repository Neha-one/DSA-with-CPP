#include <iostream>
#include <deque>
using namespace std;
class Queue
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
      cout << "queue is empty.";
      return;
    }
    deq.pop_front();
  }
  int front()
  {
    if (deq.empty())
    {
      cout << "queue is empty.";
      return -1;
    }
    return deq.front();
  }
  bool empty()
  {
    return deq.empty();
  }
};
int main()
{
  Queue q;
  for (int i = 1; i <= 5; i++)
  {
    q.push(i);
  }
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  return 0;
}