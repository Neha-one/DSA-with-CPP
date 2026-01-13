// Ques:- Print the alphabet pyramid pattern:-
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        for (int space = m; space > row; space--) // space
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << char(col + 64) << " ";
        }
        cout << endl;
    }

    // type 2nd of alphabet pyramid:-

    for (int row = 1; row <= m; row++)
    {
        for (int space = m; space > row; space--) // space
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << char(row + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
