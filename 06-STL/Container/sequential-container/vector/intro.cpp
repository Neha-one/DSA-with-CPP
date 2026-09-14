#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  vector<int> a(5, 1); // 5 elements with value 1;
  cout<< "Elements of vector a: " << endl;
  for(int i:a){
    cout << i << " ";
  }
  cout<< endl;

  vector<int> last(a); // copy of vector a in vector last
  cout << "Elements of vector last: " << endl;
  for (int i : last)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "capacity of vector: " << v.capacity() << endl; // 0

  v.push_back(1);
  cout << "capacity of vector after pushing 1: " << v.capacity() << endl; // 1

  v.push_back(2);
  cout << "capacity of vector after pushing 2: " << v.capacity() << endl; // 2

  v.push_back(3);
  cout << "capacity of vector after pushing 3: " << v.capacity() << endl; // 4 cause when we push 3, the capacity of vector is doubled from 2 to 4.

  v.push_back(4);
  cout << "capacity of vector after pushing 4: " << v.capacity() << endl; // 4

  v.push_back(5);
  cout << "capacity of vector after pushing 5: " << v.capacity() << endl; // 8 cause when we push 5, the capacity of vector is doubled from 4 to 8.

  cout << "size of vector " << v.size() << endl; // 5 because we have pushed 5 elements in the vector.

  cout << "before pop_back: " << endl;
  for (int i : v)
  {
    cout << i << " " << endl;
  }
  v.pop_back();

  cout << "after pop_back: " << endl;
  for (int i : v)
  {
    cout << i << " " << endl;
  }

  cout << "before clear size: " << v.size() << endl
       << "capacity: " << v.capacity() << endl;
  v.clear(); // it will clear the vector but the capacity of vector will remain same.
  cout << "after clear size: " << v.size() << endl
       << "capacity: " << v.capacity() << endl;

  cout << "1st element: " << v.front() << endl;
  cout << "last element: " << v.back() << endl;
  return 0;
}