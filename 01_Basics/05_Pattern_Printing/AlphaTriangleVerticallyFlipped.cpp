// Ques:- Print the given pattern:-
/*
        A
      A B
    A B C
  A B C D
A B C D E

*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= (m - row); col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << char(col + 64) << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Ques:- Print the given pattern:-
    /*
        A
      B B
    C C C
  D D D D
E E E E E

    */
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= (m - row); col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << char(row +64) << " ";
        }
        cout << endl;
    }
    return 0;
}