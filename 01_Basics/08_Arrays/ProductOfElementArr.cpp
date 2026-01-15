// Ques: Calculate the product of all the elements of the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 3, 8, 5, 2};
    int n = sizeof(arr) / 4;
    int subs = 1;
    for (int i = 0; i < n; i++)
    {
        subs *= arr[i];
    }
    cout << subs;
}
