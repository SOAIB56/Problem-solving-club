#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s; // input the string
  string ans = ""; // initialize the answer string
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) { // if the index is even (odd-positioned)
      ans += s[i]; // append the character to the answer string
    }
  }
  cout << ans << endl; // output the answer string
  return 0;
}
