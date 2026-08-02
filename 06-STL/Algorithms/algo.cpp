#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(5);
  v.push_back(9);

  cout << "finding 5: " << binary_search(v.begin(), v.end(), 5) << endl;
  cout << "upper bound of 5: " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl; // 9
  cout << "lower bound of 5: " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl; // 2

  int a = 3;
  int b = 5;
  cout << "min " << min(a, b) << endl;
  cout << "max " << max(a, b) << endl;

  swap(a, b);
  cout << " a " << a << endl;

  string name = "mani";
  reverse(name.begin(), name.end());
  cout << "string mani after reverse: " << name << endl;

  rotate(v.begin(), v.begin() + 2, v.end());
  cout << "after rotate: " << endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}