#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter your 1st side: ";
    cin >> a;
    cout << "Enter your 2nd side: ";
    cin >> b;
    cout << "Enter your 3rd side: ";
    cin >> c;
    if ((a + b) > c and (b + c) > a && (a + c) > b)
    {
        cout << "Valid sides of Trangle.";
    }
    else
    {
        cout << "Invalid sides of Trangle.";
    }
}