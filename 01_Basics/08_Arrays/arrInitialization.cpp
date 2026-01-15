#include <iostream>
using namespace std;

int main()
{
    // 5 integers
    int arr[5] = {4, 3, 8, 5, 2}; // declaration in one line. here we can also take just arr[]

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    // reverse array
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
