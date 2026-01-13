#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter rows:";
    cin >> m;
    int n;
    cout << "enter coloums:";
    cin >> n;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << col;
        }
        cout << endl;
    }
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << row;
        }
        cout << endl;
    }
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << char(col + 64);
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << char(row + 64);
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }

        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = m; col >= row; col--)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = m; col >= row; col--)
        {
            cout << row;
        }
        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = m; col >= row; col--)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = row; col <= m; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int row = 1; row <= m; row++)
    {
        for (int col = row; col <= m; col++)
        {
            cout << row;
        }
        cout << endl;
    }

    for (int row = m; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}