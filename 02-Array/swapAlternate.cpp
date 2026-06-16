#include <iostream>
using namespace std;

void swapalternate(int arr[], int n)
{
    // it not good as a dsa practice because the array remains unchanged and we just change the order of elements and print that.
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            i++;
        }
        cout << arr[i] << " ";

        for (int j = 0; j <= i; j++)
        {
            if (n % 2 != 0 && i / 2 == n / 2)
            {
                break;
            }
            if (i - j == 1)
            {
                cout << arr[j] << " ";
            }
        }
    }
    cout << endl;
}
void swapusingfn(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {

            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    //---------method -01----------(my 1st attempt idea😊)

    swapalternate(arr, n);

    //---------method - 02----------
    swapusingfn(arr, n);
    return 0;
}