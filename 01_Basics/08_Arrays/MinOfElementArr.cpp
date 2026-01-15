#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {14, 3, 8, 35, 2};
    int n = sizeof(arr) / 4;
    // int mn = arr[0];
    //OR
    int mn=INT16_MAX;
    for (int i = 1; i < n; i++)
    {

        if (mn > arr[i])
        {
            mn = arr[i];
        }
        // OR
        // mn = min(mn, arr[i]);
    }
    cout << mn;
}
