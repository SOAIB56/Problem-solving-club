#include<bits/stdc++.h>
using namespace std;

int main() {
    set<long long> nums;

    for (long long k = 2; k <= 1000; ++k) {
        long long val = 1 + k;
        long long p = k * k;
        for (int cnt = 2; cnt <= 20; ++cnt) {
            val += p;
            if (val > 1e6) break;
            nums.insert(val);
            p *= k;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (nums.count(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
