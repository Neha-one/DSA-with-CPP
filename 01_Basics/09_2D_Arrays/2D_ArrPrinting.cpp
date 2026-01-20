#include <iostream>
using namespace std;
int main()
{
    int arr[2][2];
    arr[0][0] = 5;
    arr[0][1] = 6;
    arr[1][0] = 7;
    arr[1][1] = 8;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // taking input by user;
    // int n;
    // cout << "n";
    // cin >> n;
    // int m;
    // cout << "m";
    // cin >> m;
    // int arr[n][m];

    // // taking input of 2D Array.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << endl;
    // // Printing of 2D Array.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}