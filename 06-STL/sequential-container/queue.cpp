#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<string> q;

  q.push("Mani");
  q.push("Neha");
  q.push("Aryan");

  cout << "Size of queue: " << q.size() << endl;

  cout << "first element: " << q.front() << endl;
  q.pop();
  cout << "first after pop element: " << q.front() << endl;

  cout << "Size of queue: " << q.size() << endl;
  return 0;
}