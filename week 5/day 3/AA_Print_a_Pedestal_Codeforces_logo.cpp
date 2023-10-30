#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 5;
// const int M = 1e9 + 5;
// const int mod = 1000000007;
// const int max_prime = 1e6 + 3;
// const int BLK = 700;

#define ll long long int
#define vi vector<int>
#define pb push_back

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int x, y, z;

        for (int i = 1; i <= n; i++) {
            y = i;
            int rem = n - y;

            if (rem % 2 == 0) {
                x = 1 + (rem / 2);
            } else {
                x = (rem + 1) / 2;
            }

            z = n - y - x;

            if (x > 0 && y > 0 && z > 0 && x < y && x > z) {
                break;
            }
        }

        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
