// EXAMPLE:calculating sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter your 1st number: ";
    cin >> x;
    cout << "enter your  2nd number: ";
    cin >> y;
    int sum = x + y;
    cout << "sum of number is: " << sum;

    cout<<endl;
    // sum of n numbers using formula:
    int n;
    cout << "enter number:";
    cin >> n;
    cout << "sum of " << n << " number is " << (n*(n + 1)) / 2;
}
