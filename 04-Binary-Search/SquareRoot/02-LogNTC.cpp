#include <iostream>
using namespace std;

int squareRoot()
{

  int key = 18;
  int s = 0;
  int e = key;
  long long int mid = s + (e - s) / 2;
  long long int ans = -1;
  while (s <=  e)
  {

    long long int square = mid * mid;
    if (square == key)
    {
      return mid;
    }
    else if (square < key)
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  cout << squareRoot();
}