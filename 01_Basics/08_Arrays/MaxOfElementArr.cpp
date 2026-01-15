#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {14, 3, 8, 35, 12};
    int n = sizeof(arr) / 4;
    // int mx = arr[0];
    //OR
    int mx = INT16_MIN;
    for (int i = 1; i < n; i++)
    {

        // if (mx < arr[i])
        // {
        //     mx = arr[i];
        // }
        // OR
        mx = max(mx, arr[i]);
    }
    cout << mx;
}
