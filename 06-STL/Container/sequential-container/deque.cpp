#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque<int> d;
  d.push_back(1);
  d.push_front(2);

  for (int i : d)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "print 1st index ele: " << d.at(1) << endl;
  cout << "front: " << d.front() << endl;
  cout << "back: " << d.back() << endl;

  cout << "empty or not: " << d.empty() << endl;

  cout << "before erase: " << d.size() << endl;
  d.erase(d.begin(), d.begin() + 1); // erase 1st element
  cout << "after erase: " << d.size() << endl;

  //size of deque means how many elements are present in the deque. and max size remains same as it is the maximum number of elements that can be present in the deque.
  return 0;
}