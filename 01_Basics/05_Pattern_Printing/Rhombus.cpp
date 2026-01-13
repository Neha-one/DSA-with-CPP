// Ques:- Print the given pattern:-
/*
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *

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
        for (int col = m; col > row; col--) // space
        {
            cout << "  ";
        }
        for (int col = 1; col <= m; col++)  //star
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}