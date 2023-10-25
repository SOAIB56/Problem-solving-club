#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    long long testCase;
    cin >> testCase;
    while (testCase--) {
        int n, q;
        cin >> n >> q;
        long long temp, evenCount = 0, oddCount = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp % 2 == 0) {
                evenCount++;
                sum += temp;
            } else {
                oddCount++;
                sum += temp;
            }
        }
        while (q--) {
            int type, x;
            cin >> type >> x;
            if (type == 1) {
                sum += oddCount * x;
                if (x & 1) {
                    evenCount += oddCount;
                    oddCount = 0;
                }
            } else {
                sum += (evenCount * x);
                if (x & 1) {
                    oddCount += evenCount;
                    evenCount = 0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
