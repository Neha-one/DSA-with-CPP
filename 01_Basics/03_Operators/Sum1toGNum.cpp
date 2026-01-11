// // QUES:- Wap to print sum from 1 to  given number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
int i=1;
int sum=0;
while(i<=n){
    sum=sum+i;
    i++;
}
cout<<sum;
}