#include <iostream>
using namespace std;

// function to calculate the gcd of three numbers
int gcd(int a, int b, int c) {
  // use Euclidean algorithm to find the gcd of a and b
  while (b > 0) {
    int r = a % b; // remainder of a divided by b
    a = b; // assign b to a
    b = r; // assign r to b
  }
  // now a is the gcd of a and b, repeat the same process for a and c
  while (c > 0) {
    int r = a % c; // remainder of a divided by c
    a = c; // assign c to a
    c = r; // assign r to c
  }
  // now a is the gcd of a, b and c, return it
  return a;
}

int main() {
  int k; // input k
  cin >> k; // input k
  int ans = 0; // answer variable
  for (int a = 1; a <= k; a++) { // loop for each value of a from 1 to k
    for (int b = 1; b <= k; b++) { // loop for each value of b from 1 to k
      for (int c = 1; c <= k; c++) { // loop for each value of c from 1 to k
        ans += gcd(a, b, c); // add the gcd of a, b and c to the answer
      }
    }
  }
  cout << ans << endl; // output the answer
  return 0;
}
