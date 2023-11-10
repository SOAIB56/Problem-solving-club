#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the power of x raised to the power y % MOD
int power(int x, int y) {
    int result = 1;
    x = x % MOD;
    while (y > 0) {
        if (y & 1)
            result = (result * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return result;
}

// Function to calculate nCr % MOD
int nCr(int n, int r) {
    if (r == 0)
        return 1;
    int fac[n+1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i-1] * i) % MOD;
    return (fac[n] * power(fac[r], MOD - 2) % MOD * power(fac[n-r], MOD - 2) % MOD) % MOD;
}

// Function to calculate the number of ways of coloring with the given condition
int waysOfColoring(int N, int K) {
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans = (ans * K) % MOD;
    }

    for (int i = 1; i <= N-1; i++) {
        ans = (ans * power(K-1, MOD - 2)) % MOD;
    }

    return ans;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K; // Number of stones and number of colors
        cin >> N >> K;

        // Output the result for each test case
        cout << waysOfColoring(N, K) << endl;
    }

    return 0;
}
