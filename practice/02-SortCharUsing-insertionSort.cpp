#include <iostream>
using namespace std;
void printArr(char ch[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << ch[i] << " ";
  }
}
void sortChar(char ch[], int n)
{
  for (int i = 1; i < n; i++)
  {
    char temp = ch[i];
    int j = i - 1;
    while (temp > ch[j] && j >= 0)
    {
      ch[j + 1] = ch[j];
      j--;
    }
    ch[j + 1] = temp;
  }
  printArr(ch, n);
}
int main()
{
  char ch[] = {'f', 'e', 'g', 'a', 'x'};
  int size = sizeof(ch) / sizeof(ch[0]);
  sortChar(ch, size);
  return 0;
}