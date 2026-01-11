// Predict the Output:-
#include <iostream>
using namespace std;
// int main(){
//     int x=10,y=20;
//     if(x==y);
//     cout<<x<<" "<<y;
// }
// //OUTPUT ;- 10 20 cause there is a semicolon after finishing of if line that means if statement finished there.

// int main()
// {
//     int x = 3, y = 5;
//     if (x == 3)
//         cout << x << endl;
//     else
//         ;
//     cout << y << endl;
// }
// // OUTPUT:- 3 5

main()
{
    int x = 3, y, z;
    y = x = 10; // precedence in assignment operator is left to right.
    z = x < 10; // x<10 is false(0) so z=0.
    cout << x << " " << y << " " << z;
}
// OUTPUT :- 10 10 0