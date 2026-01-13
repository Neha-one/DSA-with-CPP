// Fibonacci:-
#include <iostream>
using namespace std;
void fibonacci(int n, int a, int b)
{
    if (n == 0)
        return;

    cout << a << " ";
    fibonacci(n - 1, b, a + b);
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n, 0, 1);
}
