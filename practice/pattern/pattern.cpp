#include <iostream>
using namespace std;
void palindrome()
{
  for (int i = 0; i < 5; i++)
  {

    for (int j = 0; j < 5 - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << i - j + 1;
    }
    for (int j = 1; j <= i; j++)
    {
      cout << 1 + j;
    }
    cout << endl;
  }
}
void crossLine()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i == j || i + j == 4)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}
void Rectanale()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (j == 0 || j == 4 || i == 0 || i == 4)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
void practice()
{
  int count = 1;
  while (count <= 15)
  {
    cout << (count % 2 == 1 ? "****" : "++++");

    ++count;
  }
  cout << endl;
}
void plusone(int arr[], int n)
{

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum * 10 + arr[i];
  }
  cout << sum + 1;
  int digit = 0;
  // for (int i = 0; i < n;i++){
  //   int digit = arr[i]
  // }
  cout << sum[0];
}
int main()
{

  // palindrome();
  // crossLine();
  // Rectanale();
  // practice();
  int arr[] = {1, 2, 3};
  plusone(arr, 3);
  return 0;
}