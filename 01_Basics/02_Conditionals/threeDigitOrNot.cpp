// Take positives integer input and tell if it is a three digit number or not.
#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout << "Enter Your Number:";
    cin>>Number;
    if(Number > 99 and Number < 999){
        cout<<"Yes! Given Number is three Digit.";
    }
    else{
        cout<<"Not! Given Number is Not three Digit.";
    }
}