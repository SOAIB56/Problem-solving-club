#include <iostream>
#include <string>
using namespace std;

int main() {
  // Read the input string and its length from standard input
  int n;
  string s;
  cin >> n >> s;

  // Initialize a counter for the number of occurrences of ABC
  int count = 0;

  // Loop through the string and check for ABC as a contiguous subsequence
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      // If found, increment the counter
      count++;
    }
  }

  // Print the counter as the output
  cout << count << endl;
  
  return 0;
}
