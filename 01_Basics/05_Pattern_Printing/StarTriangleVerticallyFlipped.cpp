// Ques:- Print the given pattern:-
//      *
//    * *
//  * * *
//* * * *

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;

    // 1st method using if else easy:-
    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col <= m; col++)
    //     {
    //         if ((row + col) < (m + 1))
    //             cout << "  ";
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 2nd method using loops:-
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= (m - row); col++) // loop for spaces
        // OR
        //  for (int col = m; col > row; col--)    //loop for spaces
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++) // loop for star
        {
            cout << "* ";
        }

        cout << endl;
    }
}
