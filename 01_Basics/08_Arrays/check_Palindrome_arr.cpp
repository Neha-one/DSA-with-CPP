// Ques: If an array arr contains n elements , then check if the given array is a palndrome or not.
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {8, 5, 4, 3, 3, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = n - 1;
    bool isPalindrome = true;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }

        else
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}