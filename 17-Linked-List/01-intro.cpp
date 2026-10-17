#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
  }
};
class List
{
public:
  Node *head;

  List()
  {
    head = NULL;
  }
};

int main()
{
  List LL;
  return 0;
}