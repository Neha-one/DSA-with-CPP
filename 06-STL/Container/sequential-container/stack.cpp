#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<string> s;

  s.push("Mani");
  s.push("Neha");

  cout << "Top element: " << s.top() << endl;

  s.pop();
  cout << "Top element after pop: " << s.top() << endl;

  cout << "Size of stack: " << s.size() << endl;
  return 0;
}