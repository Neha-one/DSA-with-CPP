#include <iostream>
using namespace std;
class Student{
  public:
    float cgpa;
    string name;
    void getPercentage(){
      cout << (cgpa * 10) << "%" << endl;
    }

    public:
      int age;
};
int main()
{
  Student s1;
  s1.name = "Neha";
  s1.cgpa = 9;
  cout << s1.name << endl;
  cout << s1.cgpa << endl;
  s1.getPercentage();
  return 0;
}