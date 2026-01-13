// // Prime Number:-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     bool flag = true; // true means prime.
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = false; // false means composite.
//             break;        // break current loop se out kar deta h but loop ke bahar ka statement work krega.
//         }
//     }
//     if (n <= 1)
//         cout << "Neithe Prime Nor Composite.";
//     else if (flag == true)
//         cout << "Prime";
//     else
//         cout << "Composite";
// }