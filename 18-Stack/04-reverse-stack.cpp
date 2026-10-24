#include <iostream>
#include <stack>
using namespace std;
void pushAtButton(stack<int> &s, int val)
{
  if (s.empty())
  {
    s.push(val);
    return;
  }
  int top = s.top();
  s.pop();
  pushAtButton(s, val);
  s.push(top);
}
void reverse(stack<int> &s)
{
  if (s.empty())
  {
    return;
  }
  int temp = s.top();
  s.pop();
  reverse(s);
  pushAtButton(s, temp);
}
void printStack(stack<int> s)
{
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}
int main()
{
  stack<int> s;
  s.push(4);
  s.push(3);
  s.push(2);
  s.push(1);
  printStack(s);

  reverse(s);
  printStack(s);
  return 0;
}