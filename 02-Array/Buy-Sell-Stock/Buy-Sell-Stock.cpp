#include <iostream>
using namespace std;

void MaxProfit(int *prices, int n)
{
  int BestBuy[10000];
  BestBuy[0] = INT16_MAX;

  for (int i = 1; i < n; i++)
  {
    BestBuy[i] = min(BestBuy[i - 1], prices[i - 1]);
  }
  int maxProfit = 0;
  for (int i = 0; i < n; i++)
  {
    int currProfit = prices[i] - BestBuy[i];
    maxProfit = max(maxProfit, currProfit);
  }
  cout << "Max profit = " << maxProfit;
}
int main()
{
  int prices[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(prices) / sizeof(int);
  MaxProfit(prices, n);

  return 0;
}