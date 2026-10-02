#include <iostream>
#include <vector>
#include <string>
using namespace std;

//--------method 1:using frequency array to store the frequency of each character and then check if the character is already added to the answer or not ------time complexity is O(n) , space complexity is O(n)

// string removeString(string str)
// {
//   string ans = "";
//   vector<int> freq(26, 0);
//   for (int i = 0; i < str.length(); i++)
//   {
//     int idx = str[i] - 'a';
//     freq[idx]++;
//   }
//   for (int i = 0; i < str.length(); i++)
//   {
//     int idx = str[i] - 'a';
//     if (freq[idx] >= 1)
//     {
//       ans += str[i];
//       freq[idx] = 0;
//     }
//   }
//   return ans;
// }

//--------method 2: time complexity is O(n) , space complexity is O(1)

// string removeString(string str)
// {
//   string ans = "";
//   bool freq[26] = {false};
//   for (int i = 0; i < str.length(); i++)
//   {
//     int idx = str[i] - 'a';
//     freq[idx] = true;
//   }
//   for (int i = 0; i < str.length(); i++)
//   {
//     int idx = str[i] - 'a';
//     if (freq[idx] == true)
//     {
//       ans += str[i];
//       freq[idx] = false;
//     }
//   }
//   return ans;
// }
//--------method 3: time complexity is O(n) , space complexity is O(1)
// string removeString(string str)
// {
//   string ans = "";
//   bool freq[26] = {false};

//   for (int i = 0; i < str.length(); i++)
//   {
//     int idx = str[i] - 'a';
//     if (freq[idx] == false)
//     {
//       ans += str[i];
//       freq[idx] = true;
//     }
//   }
//   return ans;
// }
//--------method 4: RECURSION:
string removeString(string str, string ans, int i, bool map[])
{
  // base case:
  if (i == str.length())
  {
    return ans;
  }
  int idx = str[i] - 'a';
  if (map[idx] == false) // not added in ans
  {
    map[idx] = true;
    return removeString(str, ans + str[i], i + 1, map);
  }
  else
  {
    return removeString(str, ans, i + 1, map); // duplicate character
  }
}
int main()
{
  string str = "aaaaannkkussaaaeeaashhhhhh";
  bool map[26] = {false};
  cout << removeString(str, "", 0, map);
  return 0;
}