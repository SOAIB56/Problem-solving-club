#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  // Read the input string from standard input
  string s;
  cin >> s;

  // Create a set of lowercase English letters
  set<char> letters;
  for (char c = 'a'; c <= 'z'; c++) {
    letters.insert(c);
  }

  // Remove the letters that occur in the input string
  for (char c : s) {
    letters.erase(c);
  }

  // If the set is empty, print None
  if (letters.empty()) {
    cout << "None" << endl;
  }
  // Otherwise, print the lexicographically smallest letter
  else {
    cout << *letters.begin() << endl;
  }
  
  return 0;
}
