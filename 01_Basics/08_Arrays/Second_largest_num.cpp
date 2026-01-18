// Ques: Find the second largest element in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 8, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int mx = arr[0];
    int mx = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;

    int sMx = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mx)
        {
            sMx = max(sMx, arr[i]);
        }
    }
    cout << sMx;
}
