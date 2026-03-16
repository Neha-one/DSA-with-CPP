#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    while (true)
    {
        int num = 2;
        switch (num)
        {
        case 2:
            cout << "number";
            // break;//can not stop infinite loop with switch.
            exit(0); // immediately terminates the whole program.

        default:
            cout << "Nothing";
        }
    }
}

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main() {

//     while(true) {
//         int choice;
//         cout << "1. Hello\n2. Exit\n";
//         cin >> choice;

//         switch(choice) {
//             case 1:
//                 cout << "Hello\n";
//                 break;

//             case 2:
//                 cout << "Exiting program\n";
//                 exit(0);   // terminates program

//             default:
//                 cout << "Invalid choice\n";
//         }
//     }
// }