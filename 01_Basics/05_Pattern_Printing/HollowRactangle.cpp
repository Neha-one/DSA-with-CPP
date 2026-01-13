// Ques:- Print the given pattern:-
/*
 * * * * * *
 *         *
 *         *
 * * * * * *
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows:";
    cin >> n;
    int m;
    cout << "enter number of colums:";
    cin >> m;
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == m || col == 1 || col == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}