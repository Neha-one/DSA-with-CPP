#include <iostream>
using namespace std;

int main()
{
  int students[2][3];
  int n = 2, m = 3;
  // -----input---
  cout << "enter your values: ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> students[i][j];
    }
  }

  //---output-----

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << students[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}