#include <iostream>
using namespace std;
bool search(int arr[], int n, int key)
{

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }
  return 0;
}
int main()
{
  int arr[] = {4, 5, 6, 4, 546, 5, 4, 3};
  int n = sizeof(arr) / sizeof(int);
  int key;
  cout << "enter key :";
  cin >> key;
  int found = search(arr, n, key);
  if(found) cout<<"present";
  else cout<<"not present";
}