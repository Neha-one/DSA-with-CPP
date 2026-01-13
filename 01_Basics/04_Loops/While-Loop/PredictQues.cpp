// PREDICT THE OUTPUT
// QUES 1 :-
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int x=1;
//      while (x==1)
//      x=x-1;
//      cout<<x<<endl;
//  }   // 0

// QUES 2 :-
//  main(){
//      int i;
//      while (i=10){
//          cout<<i<<endl;
//          i=i+1;
//      }
//  }        //THIS IS A INFINITE LOOP CAUSE THERE IS NO STOPPING CONDITION.

// QUES 3 :-
//  mani(){
//      while ('a'< 'b')     //here we didn't compare the char rather ASCII value will compare.
//      cout<<"malayalam is a palindrome"<<endl;
//  }         //THIS IS ALSO A INFINITE LOOP CAUSE a(97) < b(98).

// QUES 4 :-
//  main(){
//      int i=10;
//      while(i=20)
//      printf("\nA computer buff!");
//  }        //ALSO A INFINITE LOOP.

// QUES 4 :-
#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            cout << x << " " << y << endl;
    }
}       //3 1 ,  1 3 ,  0 4 ,  -1 5