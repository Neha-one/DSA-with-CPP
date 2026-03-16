#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int binary = 0;
    int complement = 0;
    int decimal = 0;
    int place = 1;
    int place2 = 0;
    int x = n;
    while (n != 0)
    {
        int rem = n % 2;
        binary = binary + rem * place;

        if (rem == 0)
            rem = 1;
        else
            rem = 0;

        complement = complement + rem * place;

        place *= 10;

        decimal = decimal + rem * (pow(2, place2));
        place2++;

        n = n / 2;
    }
    cout << "binary of " << x << " = " << binary << endl;
    cout << "complement of " << binary << " = " << complement << endl;
    cout << "decimal of complement of binary of " << x << " = " << decimal;
}