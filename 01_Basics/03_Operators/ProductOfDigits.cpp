// QUES:- Wap to print product of digits of a given number.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your digits: ";
    cin>>n;
    int product=1;
    while(n>0){
      int  r=n%10;
      product=product*r;
        n=n/10;
    }
    cout<<product;
}

