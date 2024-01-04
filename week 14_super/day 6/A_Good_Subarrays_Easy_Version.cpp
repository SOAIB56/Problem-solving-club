#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n + 3);
        for (int i = 1; i <= n; i++) cin >> ar[i];

        ll ans = 0;
        int j = 1;
        for (int i = 1; i <= n; i++) {
            while (j <= n && ar[j] + (i - 1) >= j) j++;
            ans += (j - i);
            if (j == i) j++;
        }
        cout << ans << endl;
    }
    return 0;
}
