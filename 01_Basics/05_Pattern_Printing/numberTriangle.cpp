// Ques:- Print the given pattern:-
/*
1
12
123
1234
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
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:-
    /*
    1
    22
    333
    4444
    */
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:-
    /*
    4
    43
    432
    4321
    */
    for (int row = m; row >= 1; row--)
    {
        for (int col = m; col >= row; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:-
    /*
    1
    13
    135
    1357
    */

    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col <= m; col++)
    //     {
    //         cout << char(col + 64);
    //     }
    //     cout << endl;
    // }

    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i += 2)
    {
        // cout << i << " ";
        for (int row = 1; row <= m; row++)
        {
            for (int col = row; col >= 1; col--)
            {
                cout << i;
            }
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:-
    /*
    1234
    123
    12
    1
    */
    for (int row = m; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    // Ques:- Print the given pattern :-
    /*
    1111
    222
    33
    4
    */
    for (int row = 1; row <= m; row++)
    {
        for (int col = row; col <= m; col++)
        {
            cout << row;
        }
        cout << endl;
    }
    return 0;
}
