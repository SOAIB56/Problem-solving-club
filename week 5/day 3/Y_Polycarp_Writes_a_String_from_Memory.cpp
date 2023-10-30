#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

#define ll long long int
#define vi vector<int>
#define setchar set<char>

int main() {

    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1;
        setchar ss;

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
