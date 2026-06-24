// Ques: Write a program to add two matrices.
#include <iostream>
using namespace std;
int main()
{
    int arr1[2][2] = {{1, 2}, {2, 3}};
    int arr2[2][2] = {{4, 5}, {6, 1}};
    int sum[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
};
