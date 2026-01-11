// QUES:- Wap to print sum of given number and its reverse.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int r = 0;
    int sum = 0;
    int rev = 0;
    int original=n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    sum = original + rev;
    cout << sum;
}

//practice:-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 0;
//     int i = 1234;
//     int orignal=i;
//     while (i)
//     {
//         int r = i % 10;
//         count = count * 10 + r;
//         i = i / 10;
//     }
//     cout << count <<"+"<< orignal<<"="<<count+orignal<<endl;
// }
