// Ques:- Print the given pattern:-
/*
*       *
  *   *
    *
  *   *
*       *

*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;
    int n;
    cout << "enter number of colums:";
    cin >> n;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            // my try for m=5 and n=5 but not logically and
            //  // if (row == col || (row == 1 && col == n) || (row == m && col == 1) || (row == 2 && col == (n - 1)) || (col == 2 && row == (m - 1)))

            if (row == col || (row + col) == (n + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}