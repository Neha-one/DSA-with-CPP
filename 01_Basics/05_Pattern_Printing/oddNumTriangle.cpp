// Ques:- Print the given pattern:-
/*
1
13
135
1357
*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows/terms:";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << 2 * col - 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2nd method:-
    for (int row = 1; row <= 2 * m - 1; row += 2)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col % 2 != 0)
            {
                cout << col << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    // 3rd method:-
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= 2 * row - 1; col += 2)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 4th method:-
    for (int row = 1; row <= m; row++)
    {
        int a = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
    return 0;
}
