#include <iostream>
using namespace std;

int main()
{
  string s = "neha";
  string t = "mani";

  // comparison operator:-
  cout << (s == t) << endl; // false --> 0
  cout << (s != t) << endl; // true --> 1

  // char index which appear first in alphabet that will be less.
  cout << (s > t) << endl; // true --> 1

  cout << (s < t) << endl; // false --> 0

  return 0;
}