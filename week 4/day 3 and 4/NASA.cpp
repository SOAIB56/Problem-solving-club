#include <bits/stdc++.h>
using namespace std;

#define int long long

void STR() 
{
    int n;
    cin >> n;
    vector<int> a;
    unordered_map<int, int> m;
    unordered_map<int, int> pal;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x = (1LL << 15) - 1;

    for (int i = 0; i < x; i++) 
    {
        string s = to_string(i);
        string s_reversed = s;
        reverse(s_reversed.begin(), s_reversed.end());
        if (s == s_reversed) {
            pal[i]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) 
    {
        x = a[i];
        m[x]++;
        for (auto it : pal) {
            int z = it.first;
            int xr = z ^ x;
            ans += m[xr];
        }
    }
    cout << ans << endl;
}

signed main() 
{
    int t = 1;
    int temp = 1;
    cin >> t;

    while (t--) {
        temp++;
        STR();
    }
    return 0;
}
