#include <bits/stdc++.h>
using namespace std;
int hashh[1000000];
int main()
{
  int n;
  cout << "enter your n: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precompute
  // int hash[10] = {0};
  for (int i = 0; i < n; i++)
  {
    hashh[arr[i]]++;
  }
  int q;
  cout << "enter q: ";
  cin >> q;
  while (q--)
  {
    int number;
    cout << "etner number: ";
    cin >> number;
    // fetch
    cout << hashh[number] << endl;
  }
  int r;
  cin >> r;
  while (r--)
  {
    cout << "neha";
  }
  return 0;
}