#include <iostream>
using namespace std;
class Student{
  //properties--
  string name;
  float cgpa;

  void getPercentage(){
    cout << (cgpa * 10) << endl;
  }
};
int main()
{
  Student s1;
  return 0;
}