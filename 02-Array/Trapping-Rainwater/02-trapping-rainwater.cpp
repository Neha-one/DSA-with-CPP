#include <iostream>
using namespace std;
int WaterUnit(int *height, int n)
{
  int leftMax = height[0];
  int RightMax = height[n - 1];
  int s = 1;
  int e = n - 2;
  int waterUnit = 0;
  while (s <= e)
  {
    leftMax = max(leftMax, height[s]);
    RightMax = max(RightMax, height[e]);
    if (leftMax < RightMax)
    {
      int CurrHeight = leftMax - height[s];
      s++;
    }
    else
    {
      waterUnit += (RightMax - height[e]);
      e--;
    }
  }
  return waterUnit;
}
int main()
{
  int height[] = {4, 2, 0, 6, 3, 2, 5};
  int n = sizeof(height) / sizeof(int);
  cout << WaterUnit(height, n);
  return 0;
}