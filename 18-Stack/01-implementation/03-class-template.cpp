#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Stack
{
  vector<T> vec;

public:
  void push(T val)
  {
    vec.push_back(val);
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "stack is empty" << endl;
      return;
    }
    vec.pop_back();
  }
  T top()
  {
    if (isEmpty())
    {
      cout << "stack is empty " << endl;
      // return -1;
    }
    else
      return vec[vec.size() - 1];
  }
  bool isEmpty()
  {
    if (vec.size() == 0)
    {
      return true;
    }
    else
      return false;
  }
};
int main()
{
  Stack<char> s;
  s.push('i');
  s.push('n');
  s.push('a');
  s.push('m');
  while (!s.isEmpty())
  {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}