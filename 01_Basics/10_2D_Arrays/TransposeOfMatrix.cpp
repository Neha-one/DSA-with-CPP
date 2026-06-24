#include <iostream>
using namespace std;
int main()
{
    // int arr[2][2];
    // arr[0][0] = 5;
    // arr[0][1] = 6;
    // arr[1][0] = 7;
    // arr[1][1] = 8;
    // for (int j = 0; j < 2; j++)
    // {
    //     for (int i = 0; i < 2; i++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // method 02
    // taking input by user;
    int n;
    cout << "n";
    cin >> n;
    int m;
    cout << "m";
    cin >> m;
    int arr1[n][m];

    // taking input of 2D Array.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    // Printing of 2D Array.
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}