#include <iostream>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // input t
  while (t--) { // loop for each test case
    int a, b, c, d; // four distinct integers
    cin >> a >> b >> c >> d; // input a, b, c, d
    int count = 0; // number of participants in front of Timur
    if (b > a) count++; // if the first person is in front of Timur, increment count
    if (c > a) count++; // if the second person is in front of Timur, increment count
    if (d > a) count++; // if the third person is in front of Timur, increment count
    cout << count << endl; // output count
  }
  return 0;
}
