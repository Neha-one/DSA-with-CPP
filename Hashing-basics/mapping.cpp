#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "enter n: ";
  cin >> n;
  int arr[n];
  //input + pre-compute
  map<int, int> mpp;
  for (int i = 0; i < n;i++){
    cin >> arr[i];
    mpp[arr[i]]++;
  }

  int q;
  cout << "q: ";
  cin >> q;
  while(q--){
    int number;
    cout << "enter number: ";
    cin >> number;
    // fetch-------
    cout << mpp[number] << endl;
  }

  map<char , int>
  return 0;
}