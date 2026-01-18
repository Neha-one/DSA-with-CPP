// Ques: Write a program to copy the content of one array into another in the reverse order.
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 3, 6, 8, 5, 62, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int revArr[n];
    // 1st loop modify arr elements:
    for (int i = 0; i < n; i++)
    {
        revArr[i] = arr[n - 1 - i];
        // cout << revArr[i] << " ";//or using 2nd loop.
    }
    // 2nd loop print updated arr elements:
    for (int i = 0; i < n; i++)
    {
        cout << revArr[i] << " ";
    }
}