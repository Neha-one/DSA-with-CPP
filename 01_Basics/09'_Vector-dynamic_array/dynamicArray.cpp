#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> n;
  n.push_back(11);
  n.push_back(33);
  n.push_back(44);
  
  cout << "Before pop_back: " << n[0] << endl;  // Print first element
  n.pop_back();  // Remove last element (44)
  cout << "After pop_back: " << n[0] << endl;   // Print first element (still 11)
  cout << "Vector size: " << n.size() << endl;  // Check size
}