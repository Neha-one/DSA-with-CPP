// QUES:- Given a point (x,y), write a program to find out if it lies in the 1st Quadrant,2nd Quadrant, 3rd Quadrant , 4th Quadrant , on the x-axis , y-axis orat the origin, viz.(0,0).
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter your 1st value :";
    cin >> x;

    cout << "enter your 2nd value :";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "(" << x << "," << y << ")" << " at 1st Quadrant.";
    }
    else if (x < 0 && y > 0)
    {
        cout << "(" << x << "," << y << ")" << "  at 2nd Quadrant.";
    }
    else if (x < 0 && y < 0)
    {
        cout << "(" << x << "," << y << ")" << "  at 3rd Quadrant.";
    }
    else if (x > 0 && y < 0)
    {
        cout << "(" << x << "," << y << ")" << "  at 4th Quadrant.";
    }
    else if ((x > 0 || x < 0) && y == 0)
    {
        cout << "(" << x << "," << y << ")" << "  at x-axis.";
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "(" << x << "," << y << ")" << "  at y-axis.";
    }
    else if (x == 0 && y == 0)
    {
        cout << "(" << x << "," << y << ")" << "  at origin(0,0).";
    }
    else
    {
        cout << "(" << x << "," << y << ")" << "  invalid.";
    }
}