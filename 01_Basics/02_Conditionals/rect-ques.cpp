// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main()
{
    int L, B;
    cout << "Enter your length of rect: ";
    cin >> L;
    cout << "Enter your breadth of rect: ";
    cin >> B;
    int area = L * B;
    int Perimeter = 2 * (L + B);
    if (area > Perimeter)
    {
        cout << "Area of rectangle is greater than its Perimeter.";
    }
    else
    {
        cout << "Perimeter of rectangle is greater than its Area.";
    }
}