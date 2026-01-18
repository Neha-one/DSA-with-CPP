// Ques: Find the different between the sum of elements at even indices to the sum of elements at odd indices.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 8, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }
    cout << "differece = " << evenSum - oddSum;
}
