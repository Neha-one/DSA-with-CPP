#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int rem;
    int binary = 0;
    int place = 1;
    while (n != 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n = n / 2;
    }
    cout << binary;
}