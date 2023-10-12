#include <iostream>
#include <string>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // input t
  while (t--) { // loop for each test case
    string s; // string s
    cin >> s; // input s
    for (int i = 0; i < 3; i++) { // loop for each character of s
      s[i] = toupper(s[i]); // convert to uppercase
    }
    if (s == "YES") { // check if s is equal to "YES"
      cout << "YES" << endl; // output "YES"
    } else {
      cout << "NO" << endl; // output "NO"
    }
  }
  return 0;
}
