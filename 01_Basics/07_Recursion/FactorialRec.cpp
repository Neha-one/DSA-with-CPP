// Ques: Print factorial of n (parameterised)
#include <iostream>
using namespace std;

void factorial(int n, int fact)
{
    // ❌ ONE BIG ISSUE IF I TRY TO FIND FACT OF 0 THEN IT WILL NOT GIVE US OUTPUT.
    if (n < 1)
    {
        cout << fact;
        return;
    }
    factorial(n - 1, fact * n);
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    factorial(n, 1);
}