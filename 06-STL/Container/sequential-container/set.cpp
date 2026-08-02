#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(1);
  s.insert(2);
  s.insert(3);

  cout << "Size of set: " << s.size() << endl;

  for (auto i : s)
  {
    cout << i << " ";
  }
  cout << endl;

  //--------method 1---------

  auto its = s.begin();
  ++its;
  s.erase(its);

  for (auto i : s)
  {
    cout << i << " ";
  }
  cout << endl;

  //--------method 2---------
  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for (auto i : s)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "3 is present or not: " << s.count(5) << endl;

  //-------finding iterator-----------

  set<int>::iterator itr = s.find(3);

  if (itr != s.end())
  {
    cout << "Element found in set" << endl;
  }
  else
  {
    cout << "Element not found in set" << endl;
  };
  cout<<s.size()<<endl;
  return 0;
}