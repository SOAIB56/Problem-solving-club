#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isCorrectSpelling(string s) {
  // Check if the length of the string is equal to 5.
  if (s.length() != 5) {
    return false;
  }

  // Check if the first letter is uppercase and the other letters are lowercase.
  if (s[0] != 'T' || isupper(s[1]) || isupper(s[2]) || isupper(s[3]) || isupper(s[4])) {
    return false;
  }

  // Check if the string contains all the letters 'T', 'i', 'm', 'u', and 'r'.
  sort(s.begin(), s.end());
  if (s != "imrtu") {
    return false;
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (isCorrectSpelling(s)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
