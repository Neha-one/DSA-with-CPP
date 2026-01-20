// Ques: Find the sum of all elements in a given matrix.
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
    int sum = 0;
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
            sum += arr[i][j];
        }
    }
    cout << "sum of all element is: " << sum;
};