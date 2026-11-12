#include <iostream>
#include <queue>
using namespace std;
void interLeavesTwoQueue(queue<int> &OrgQueue)
{
  queue<int> q1;
  int n = OrgQueue.size();
  for (int i = 0; i < n / 2; i++)
  {
    q1.push(OrgQueue.front());
    OrgQueue.pop();
  }
  while (!q1.empty())
  {
    OrgQueue.push(q1.front());
    q1.pop();
    OrgQueue.push(OrgQueue.front());
    OrgQueue.pop();
  }
}
int main()
{
  queue<int> OrgQueue;

  for (int i = 1; i < 11; i++)
  {
    OrgQueue.push(i);
  }
  interLeavesTwoQueue(OrgQueue);
  while (!OrgQueue.empty())
  {
    cout << OrgQueue.front() << " ";
    OrgQueue.pop();
  }
  return 0;
}