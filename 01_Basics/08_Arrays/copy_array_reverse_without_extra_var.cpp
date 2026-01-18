// Ques: Write a program to reverse the array without using any extra array.
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // ❌BUT THE ARR IS STILL SAME SO THIS IS NOT CORRECT.
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    // ✅ The array is reversed by swapping elements from the start and end using two pointers until they meet.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}