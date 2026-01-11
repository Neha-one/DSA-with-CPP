// QUES:- Take input percentage of a student and print the Grade according to marks:
//  1) 81 - 100 Very Good
//  2) 61 - 80 Good
//  3) 41 - 60 Average
//  4) <=40 Fail

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter marks: ";
    cin >> n;
    if (n > 80 and n <= 100)
    {
        cout << "Very Good";
    }
    else if (n > 60)
    {
        cout << "Good";
    }
    else if (n > 40)
    {
        cout << "Average";
    }
    else
    {
        cout << "Fail";
    }
}