#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count the number of consecutive pairs with different characters
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                count++;
                i++; // Skip the next character as it is part of the pair
            }
        }

        // Check if the count is odd, meaning Zlatan wins
        if (count % 2 != 0) {
            cout << "Zlatan" << endl;
        } else {
            cout << "Ramos" << endl;
        }
    }

    return 0;
}
