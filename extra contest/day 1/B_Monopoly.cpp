#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S; // Read profits for each test case

        // Check if the profit of one company is strictly greater than the sum of profits of all other companies
        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
