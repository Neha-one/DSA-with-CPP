#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n)
{
  // ---------my own approach----------------
  // vector<int> ans;
  // for (int i = 0; i <= n; i++)
  // {
  //   if (i == 0 || i == 1)
  //   {
  //     ans.push_back(i);
  //     continue;
  //   }
  //   int k = i;
  //   int countbit = 0;
  //   while (k != 0)
  //   {
  //     int bit = k & 1;
  //     countbit += bit;
  //     k = k >> 1;
  //   }
  //   ans.push_back(countbit);
  // }
  //---------2nd optimization approach----------------
  vector<int> ans(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    ans[i] = ans[i >> 1] + (i & 1);
  }
  return ans;
}
int main()
{
  vector<int> final = countBits(5);
  for (int i = 0; i < final.size(); i++)
  {
    cout << i << " => " << final[i] << endl;
  }
  return 0;
}