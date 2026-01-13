/*
*****
*****
*****
*/

// SIMPLEST:-
#include <iostream>
using namespace std;
int main()
{
    cout << "*****" << endl;
    cout << "*****" << endl;
    cout << "*****" << endl;

    // SIMPLEST USING LOOP:-    loop for rows.

    int m;
    cout << "enter number of rows: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << "***";
        cout << endl;
    }

    // USING LOOP:-    loop for rows & cols.

  
    int n;
    cout << "entre number of cols: ";
    cin >> n;
    // Outer loop = vertical movement
    for (int row = 1; row <= m; row++)
    {
        // Inner loop = horizontal movement
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int row = 65; row < 70; row++)
    {
        for (int col = 65; col < 70; col++)
        {
            cout << char(row);
        }
        cout << endl;
    }
}