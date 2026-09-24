#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
  int s = 0, e = height.size() - 1;
  int max = 0;
  while (s < e)
  {
    int minHeight = min(height[s], height[e]);
    int weight = e - s;
    int area = minHeight * weight;
    if (area > max)
    {
      max = area;
    }
    else if (height[s] < height[e])
    {
      s++;
    }
    else
    {
      e--;
    }
  }
  return max;
}
int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << maxArea(height);
  return 0;
}