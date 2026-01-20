// Ques: Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). return the sum of the rectangle from (l1,r1) to (l2,r2).
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int m;
    cout << "enter m ";
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
    int l1, r1, l2, r2;
    cout << "enter l1,r1,l2,r2 ";
    cin >> l1 >> r1 >> l2 >> r2;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum of rectangle of matrix : " << sum;
    return 0;
};