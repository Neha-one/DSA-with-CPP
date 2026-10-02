#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> arr, int i, int target)
{
  if (i == -1 || arr[i] == target)
  {
    return i;
  }
  return lastOccurance(arr, i - 1, target);
}

// Another approach to find the last occurrence of a target in an array using recursion.
int lastOccurance2(vector<int> arr, int i, int target)
{
  if (i == arr.size())
  {
    return -1;
  }
  int index = lastOccurance2(arr, i + 1, target);
  if (index == -1 && arr[i] == target)
  {
    return i;
  }
  return index;
}
int main()
{
  vector<int> arr = {1, 2, 3, 3, 5};
  int n = arr.size() - 1;
  cout << lastOccurance(arr, n, 3) << endl;
  // cout << lastOccurance2(arr, 0, 1);
  return 0;
}