#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<int, string> m;

  m[2] = "neha";
  m[3] = "aryan";
  m[1] = "mani";

  m.insert({5, "som"});

  // before erase
  cout << "before erase" << endl;

  for (auto i : m)
  {
    cout << i.first << " " << i.second << endl;
  }

  // after erase
  cout << "after erase" << endl;
  m.erase(3);
  for (auto i : m)
  {
    cout << i.first << " " << i.second << endl;
  }

  cout << "finding 3 is present or not: " << m.count(53) << endl;

  auto it = m.find(5);
  for (auto i = it; i != m.end(); i++)
  {
    cout << (*i).first << endl;
  }

  return 0;
}