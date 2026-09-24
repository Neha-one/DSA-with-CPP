#include <iostream>
#include <string>
using namespace std;
class User
{
private:
  int id;
  string password;

public:
  string username;
  User(int id)
  {
    cout << "constructor created." << endl;
    this->id = id;
  }
  void setPass(string pass)
  {
    password = pass;
  }
  string getPass()
  {
    return password;
  }
};
int main()
{
  User u1(1);
  u1.setPass("neha01");
  cout << u1.getPass() << endl;
  return 0;
}