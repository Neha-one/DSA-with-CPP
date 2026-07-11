#include <iostream>
using namespace std;

int squareRoot(int key)
{

  int s = 0;
  int e = key;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
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
double pointVal(float num, float key)
{
  double fact = 0;
  double answer = 0;
  for (float i = 1; i <= 9; i++)
  {
    fact = num + i / 10;
    double squire = fact * fact;
    if (squire == key)
    {

      return fact;
    }
    for (float j = 0; j <= 9; j++)
    {
      answer = fact + j / 100;
      // cout << "hey its fact: " << fact << endl;
      double squreAnswer = answer * answer;
      // cout << "hey its answer: " << squreAnswer << endl;
      if (squreAnswer == key)
      {
        return answer;
      }
    }
  }
  return 0;
}
int main()
{
  float key = 0.09;
  int num = squareRoot(key);
  cout << num << endl;
  float ans = pointVal(num, key);
  cout << ans;
}