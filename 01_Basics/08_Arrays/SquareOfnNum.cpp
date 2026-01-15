// Ques: Given an integer n Create an array containing squares of all natural numbers till n and print the elements of the array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {14, 3, 8, 35, 12};
    int n = sizeof(arr) / 4;
    int square[n];
    for (int i = 0; i < n; i++)
    {
        square[n] = arr[i] * arr[i];
        cout << square[n]<<endl;
    }
}
