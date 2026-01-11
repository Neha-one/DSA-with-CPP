// Ques: Take 3 positive integers input and print the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "enter your 1st number:";
    cin >> n1;
    cout << "enter your 2nd number:";
    cin >> n2;
    cout << "enter your 3rd number:";
    cin >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout <<n1<<" is greatest";
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout <<n2<<" is greatest";
    }
    else
    {
        cout <<n3<<" is greatest";
    }
}
