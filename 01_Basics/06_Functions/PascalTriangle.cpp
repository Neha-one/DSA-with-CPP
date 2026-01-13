// Print pascal triangle pattern:-
#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int main()
{
    int m;
    cout << "Enter number of rows:";
    cin >> m;

    for (int i = 0; i <= m - 1; i++) // cause we initiate from 0 then i put row<=m-1 i means when i enter number of rows exact print same number of rows.
    {
        for (int space = 0; space <= m - i - 1; space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        } 
        cout << endl;
    }
}