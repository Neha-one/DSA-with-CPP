// Ques: Print sum from one to n (parameterised)
#include <iostream>
using namespace std;

void greet(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    greet(n - 1, sum + n);
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    greet(n, 0);
}