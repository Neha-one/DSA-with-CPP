// QUES:- Print the factorial of first "n" numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        cout<<"factorial Of: "<<i<<" = "<<fact<<endl;
        i++;
    }
}