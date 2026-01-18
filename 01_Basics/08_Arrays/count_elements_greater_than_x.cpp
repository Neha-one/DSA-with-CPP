// Ques: Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    int arr[] = {5, 3, 6, 8, 5, 62, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << count;
}