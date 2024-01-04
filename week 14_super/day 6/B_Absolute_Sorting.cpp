#include<bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n);

        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        vector<int> v;
        v.push_back(ar[0]);

        for (int i = 1; i < n; i++) {
            if (ar[i] != ar[i - 1]) {
                v.push_back(ar[i]);
            }
        }

        int mx = 0, mn = 1e9;
        int x = v.size();

        for (int i = 1; i < x; i++) {
            if (v[i - 1] < v[i]) {
                mn = min(mn, (v[i] + v[i - 1]) / 2);
            } else {
                mx = max(mx, (v[i] + v[i - 1] + 1) / 2);
            }
        }

        if (mn < mx) {
            cout << -1 << endl;
        } else {
            cout << mx << endl;
        }
    }

    return 0;
}
