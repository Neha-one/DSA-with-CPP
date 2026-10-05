#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
void NumOfSeven(int arr[][3])
{
  int count = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] == 7)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return;
}
void sumOfRowTwo(int arr[][3], int m)
{
  int sumOfRow = 0;
  for (int i = 0; i < 3; i++)
  {
    sumOfRow += arr[1][i];
  }
  cout << sumOfRow << endl;
  return;
}
bool validAnagram(string s, string t)
{
  if (s.length() != t.length())
  {
    return false;
  }
  int count[26] = {0};
  for (int i = 0; i < s.length(); i++)
  {
    int idx = s[i] - 'a';
    count[idx]++;
  }
  for (int i = 0; i < t.length(); i++)
  {
    int idx = t[i] - 'a';
    if (count[idx] == 0)
    {
      return false;
    }
    count[idx]--;
  }
  return true;
}
void threesum(vector<int> nums)
{
  set<vector<int>> ans;
  for (int i = 0; i < nums.size() - 2; i++)
  {
    for (int j = i + 1; j < nums.size() - 1; j++)
    {
      for (int k = j + 1; k < nums.size(); k++)
      {
        int sum = nums[i] + nums[j] + nums[k];

        if (sum == 0)
        {
          vector<int> tripet = {nums[i], nums[j], nums[k]};
          sort(tripet.begin(), tripet.end());
          ans.insert(tripet);
        }
      }
    }
  }
  for (vector<int> tripet : ans)
  {
    for (int x : tripet)
    {
      cout << x << " ";
    }
    cout << endl;
  }
}
int setbit(int n)
{
  int count = 0;
  while (n > 0)
  {
    int rem = n % 2;
    if (rem)
    {
      count++;
    }
    n /= 2;
  }
  return count;
}
int gcd(int n, int m)
{
  int minVal = min(n, m);
  int gcdVal = 1;
  for (int i = 2; i <= minVal; i++)
  {
    if (n % i == 0 && m % i == 0)
    {
      gcdVal = i;
    }
  }
  return gcdVal;
}
int gcdMethod2(int n, int m)
{
  while (m != 0)
  {
    int rem = n % m;
    n = m;
    m = rem;
  }
  return n;
}
void ReverseString(string name)
{
  reverse(name.begin(), name.end());
  int j = 0;
  for (int i = 0; i < name.length(); i++)
  {
    if (name[i] == ' ')
    {
      reverse(name.begin() + j, name.begin() + i);
      j = i + 1;
    }
    if (i == name.length() - 1)
    {
      reverse(name.begin() + j, name.begin() + i + 1);
    }
  }
  cout << name << endl;
}
int sum(int n){
  if(n==0){
    return 0;
  }
  return n + sum(n - 1);
}
int main()
{
  int arr[3][3] = {{1, 7, 6}, {7, 7, 2}, {6, 4, 7}};
  // NumOfSeven(arr);
  // sumOfRowTwo(arr, 3);
  string s = "anagram";
  // string t = "nagaram";
  // // cout << validAnagram(s, t) << endl;
  // vector<int> nums = {-1, 0, 1, 2, -1, -4};
  // // threesum(nums);
  // int n = 10;
  // cout << setbit(n);

  // cout << gcd(4, 8) << endl;
  // cout << gcdMethod2(4, 8) << endl;
  // ReverseString("the sky is blue");
cout<<sum(5)<<endl;
  return 0;
}
