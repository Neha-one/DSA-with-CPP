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
int main()
{
  stack<int> s;
  s.push(4);
  s.push(3);
  s.push(2);
  s.push(1);
  pushAtButton(s, 5);
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}