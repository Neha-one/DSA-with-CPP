// Ques: Calculate the sum of all the elements of the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 3, 8, 5, 2};
    int n = sizeof(arr) / 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
