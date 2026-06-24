// Ques: Find the minimum elements in a given matrix.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int m;
    cout << "enter m";
    cin >> m;
    int minNum = INT16_MAX;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // if (minNum < arr[i][j])
            //     minNum = arr[i][j];
            // OR
            minNum = min(minNum, arr[i][j]);
        }
    }
    cout << "minimun element is: " << minNum;
};