// Ques: Find the maximum elements in a given matrix.
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
    int maxNum = INT16_MIN;
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
            if (maxNum < arr[i][j])
                maxNum = arr[i][j];
        }
    }
    cout << "maximum element is: " << maxNum;
};