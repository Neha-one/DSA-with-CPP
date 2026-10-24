#include <iostream>
#include <unordered_set>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
class Solution
{
public:
  Node *headA;
  Node *headB;
  Node *tailA;
  Node *tailB;
  Solution()
  {
    headA = tailA = NULL;
    headB = tailB = NULL;
  }
  void callFun(Node *common)
  {
    // tailA->next = common;
    // tailB->next = common;
    Node *ans = getIntersectionNode(headA, headB);
    if (ans == NULL)
    {
      cout << "NULL" << endl;
      return;
    }
    else
    {

      cout << ans->data;
      return;
    }
  }
  Node *getIntersectionNode(Node *headA, Node *headB)
  {
    //----------approach 1st--using hashSet SC:- O(n) TC :- O(n + m)----------
    // unordered_set<Node *> set;
    // Node *curr1 = headA;
    // while (curr1 != NULL)
    // {
    //   set.insert(curr1);
    //   curr1 = curr1->next;
    // }
    // Node *curr2 = headB;
    // while (curr2 != NULL)
    // {
    //   if (set.find(curr2) != set.end())
    //   {
    //     return curr2;
    //   }
    //   curr2 = curr2->next;
    // }
    // return NULL;

    //----------approach 1st: SC:- O(1), TC :- O(n)----------

    Node *c1 = headA;
    Node *c2 = headB;
    if (c1 == c2)
    {
      return c1;
    }
    while (c1 != c2)
    {
      // c1 = (c1 == NULL) ? headB : c1->next;
      // c2 = (c2 == NULL) ? headA : c2->next;
      // if (c1 == c2)
      // {
      //   return c1;
      // }
      if (c1 == NULL)
      {
        c1 = headB;
      }
      else
      {
        c1 = c1->next;
      }
      if (c2 == NULL)
      {
        c2 = headA;
      }
      else
      {
        c2 = c2->next;
      }
      if (c1 == c2)
      {
        return c2;
      }
    }
    return NULL;
  };
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (headA == NULL)
    {
      headA = tailA = newNode;
    }
    else
    {
      tailA->next = newNode;
      tailA = newNode;
    }
  }
  void push_back2(int val)
  {
    Node *newNode = new Node(val);
    if (headB == NULL)
    {
      headB = tailB = newNode;
    }
    else
    {
      tailB->next = newNode;
      tailB = newNode;
    }
  }
};
int main()
{
  Solution ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  // ll.push_back2(8);
  ll.push_back2(9);
  Node *common = new Node(30);
  common->next = new Node(40);
  common->next->next = new Node(50);
  ll.callFun(common);
  return 0;
}