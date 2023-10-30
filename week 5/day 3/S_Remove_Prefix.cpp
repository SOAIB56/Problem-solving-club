#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int s = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (freq[a[i]] == 0) {
                s++;
            } else {
                break;
            }
            freq[a[i]]++;
        }

        cout << n - s << endl;
    }
    
    return 0;
}
