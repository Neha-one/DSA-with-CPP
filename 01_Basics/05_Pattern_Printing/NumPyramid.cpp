// Ques:- Print number pyramid pattern:-

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
            cout << col<<" ";
        }
        cout << endl;
    }



//types 2nd of number pyramid pattern:-

    for (int row = 1; row <= m; row++)
    {
        for (int space = m; space > row; space--) // space
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << row<<" " ;
        }
        cout << endl;
    }

    return 0;
}

