#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if (n % 2 == 1) {
        // No solution exists for odd N
        cout << -1 << "\n";
        return;
    }

    // For even N, print the lexicographically largest permutation
    for (int i = n; i > 0; i--) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
