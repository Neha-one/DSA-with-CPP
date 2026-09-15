#include <iostream>
using namespace std;
void EvenOdd(int n){
  if((n&1)==0){
    cout << "even" << endl;
  }
  else{
    cout << "odd"<<endl;
  }
}
int main()
{
  EvenOdd(5);
  EvenOdd(8);
  return 0;
}