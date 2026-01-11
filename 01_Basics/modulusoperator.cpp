#include <iostream>
using namespace std;
int main()
{
    //a>b
    int a = 5;
    int b = 3;
    cout << a % b<<endl;    //2

    //a<b
    int x=3;
    int y=8;
    cout<<x%y<<endl;  //3 ,x show as a output

    //a==b
    int m=4;
    int n=4;
    cout<<m%n<<endl;  //0

    //a=+ ,b=-
    int p=5;
    int q=-2;
    cout<<p%q<<endl;    //1

    //a=-,b=+
    int r=-8;
    int s=3;
    cout<<r%s<<endl;    //-2
}