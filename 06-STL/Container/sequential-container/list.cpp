#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> l;
  cout << "size of list: " << l.size() << endl;

  list<int> a(5, 100);
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  l.push_back(1);
  l.push_front(2);
  for (int i : l)
  {
    cout << i << " ";
  }
  cout << endl;

  l.erase(l.begin()); // erase 1st element
  for(int i : l){
    cout << i << " ";
  }
  cout << endl;
  cout<< "size of list: " << l.size() << endl;
  return 0;
}