#include <iostream>
using namespace std;

void change(int x[])
{
    x[0] = 100;
}
int main()
{
    // 5 integers
    int arr[5] = {4, 3, 8, 5, 2}; // declaration in one line. here we can also take just arr[]

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    change(arr);//passing by reference. 
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
}
