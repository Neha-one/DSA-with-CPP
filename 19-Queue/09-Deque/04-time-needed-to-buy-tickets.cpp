#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int timeRequiredToBuy(vector<int> &tickets, int k)
{
  deque<pair<int, int>> deq;
  int countTime = 0;
  for (int i = 0; i < tickets.size(); i++)
  {
    deq.push_back({tickets[i], i});
  }
  while (!deq.empty())
  {
    if (deq.front().second == k && deq.front().first == 1)
    {
      return ++countTime;
    }
    if (deq.front().first == 1)
    {
      deq.pop_front();
      countTime++;
    }
    else
    {
      deq.push_back({deq.front().first - 1, deq.front().second});
      deq.pop_front();
      countTime++;
    }
  }
  return countTime;
}
int main()
{
  vector<int> tickets = {2, 3, 2};
  cout << timeRequiredToBuy(tickets, 2);
  return 0;
}