// // QUES:- Wap to print sum of all the even digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter your digits: ";
    cin >> n;
    while (n > 0)
    {
        int r = n % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
        n = n / 10;
    }
    cout << sum;
}