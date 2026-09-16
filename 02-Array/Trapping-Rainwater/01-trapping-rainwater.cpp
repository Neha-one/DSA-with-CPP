#include <iostream>
using namespace std;
void WaterUnit(int *height, int n)
{
  int leftMax[20000];
  int RightMax[20000];
  leftMax[0] = INT16_MIN;
  RightMax[n - 1] = INT16_MIN;

  for (int i = 1; i < n; i++)
  {
    leftMax[i] = max(leftMax[i - 1], height[i - 1]);
  }

  for (int i = n - 2; i >= 0; i--)
  {
    RightMax[i] = max(RightMax[i + 1], height[i + 1]);
  }
  // //-------------Mine---

  // int MinHeight = 0;
  // int waterUnit = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   MinHeight = min(RightMax[i], leftMax[i]);
  //   if (MinHeight > height[i])
  //   {
  //     waterUnit += (MinHeight - height[i]);
  //   }
  // }

  // //------------Ma'am----------
  int waterUnit = 0;
  for (int i = 0; i < n; i++)
  {
    int MinHeight = min(RightMax[i], leftMax[i]);
    int currWater = MinHeight - height[i];
    if (currWater > 0)
    {
      waterUnit += currWater;
    }
  }
  cout << "Trapping Rainwater Unit: " << waterUnit << " unit";
}
int main()
{
  int height[] = {4, 2, 0, 6, 3, 2, 5};
  int n = sizeof(height) / sizeof(int);
  WaterUnit(height, n);
  return 0;
}