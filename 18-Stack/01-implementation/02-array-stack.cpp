#include <iostream>
using namespace std;
class Stack
{
public:
  int n;
  int *arr;
  int topIndex;
  Stack(int size)
  {
    n = size;
    arr = new int[n];
    topIndex = -1;
  }
  void push(int val)
  {
    if (isFull())
    {
      cout << "stack is full" << endl;
      return;
    }
    arr[++topIndex] = val;
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "stack is empty" << endl;
      return;
    }
    arr[topIndex] = -1;
    topIndex--;
  }
  int top()
  {
    if (isEmpty())
    {
      cout << "stack is empty " << endl;
      return -1;
    }
    else
    {
      return arr[topIndex];
    }
  }
  bool isFull()
  {
    return topIndex == n - 1;
  }
  bool isEmpty()
  {
    return topIndex == -1;
  }
};
int main()
{
  int n = 5;
  Stack s(n);
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