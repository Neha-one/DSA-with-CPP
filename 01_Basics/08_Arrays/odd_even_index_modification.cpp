// Ques: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    // 1st loop modify values of arr from {3, 4, 2, 7, 8} to {13 8 12 14 18 }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
        // output :-
        //  cout << arr[i] << " ";
    }
    // 2nd method of printing output:-
    // 2nd loop print updated array.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}