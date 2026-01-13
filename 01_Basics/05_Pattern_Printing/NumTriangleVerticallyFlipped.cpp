// Ques:- Print the given pattern:-
/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

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
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Ques:- Print the given pattern:-
    /*
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

    */
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= (m - row); col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}