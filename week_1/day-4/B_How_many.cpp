#include <iostream>
using namespace std;

int main() {
  // Read the input
  int S, T;
  cin >> S >> T;

  // Initialize the answer
  int ans = 0;

  // Loop over all possible values of a, b, and c
  for (int a = 0; a <= S; a++) {
    for (int b = 0; b <= S - a; b++) {
      for (int c = 0; c <= S - a - b; c++) {
        // Check if the product is less than or equal to T
        if (a * b * c <= T) {
          // Increment the answer
          ans++;
        }
      }
    }
  }

  // Print the answer
  cout << ans << endl;
  return 0;
}
