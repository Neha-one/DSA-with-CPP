#include <iostream>
using namespace std;
void reverseString(char name[], int n)
{
  int s = 0;
  int e = n - 1;
  while (s < e)
  {
    swap(name[s++], name[e--]);
  }
}

int StringSize(char name[])
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
int main()
{
  char name[10];
  cout << "Enter your name: ";
  cin >> name;
  int len = StringSize(name);

  char Oriname[10];
  for (int i = 0; i < len; i++)
  {
    Oriname[i] = name[i];
  };
  reverseString(name, len);

  cout << "Your reverse name is : " << name << endl;
  bool palindrome = true;
  for (int i = 0; i < len; i++)
  {
    if (Oriname[i] != name[i])
    {
      palindrome = false;
      break;
    }
  }
  if (palindrome)
  {
    cout << "Yessss given name is PALINDROME.";
  }
  else
  {
    cout << "Nooo given name is not a PALINDROME.";
  }
  return 0;
}