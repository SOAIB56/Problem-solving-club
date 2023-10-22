#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int ans = 1;
        set<char> ss;

        for (int i = 0; i < n; i++) {
            ss.insert(s[i]);
            if (ss.size() > 3) {
                ans++;
                ss.clear();
                ss.insert(s[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
