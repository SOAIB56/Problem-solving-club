#include <iostream>
using namespace std;

int main() {
    int A, B, C; // the lower bound, the upper bound, and the divisor
    cin >> A >> B >> C;
    int ans = -1; // the answer, initialized to -1
    for (int i = A; i <= B; i++) { // loop through all numbers between A and B
        if (i % C == 0) { // if i is a multiple of C
            ans = i; // update the answer
            break; // exit the loop
        }
    }
    cout << ans << "\n"; // print the answer
    return 0;
}
