// Ques: Find the product of all elements in a given matrix.
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
    int product = 1;
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
            product *= arr[i][j];
        }
    }
    cout << "product of all element is: " << product;
};