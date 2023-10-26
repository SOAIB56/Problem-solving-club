#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> seen;
    vector<string> order;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (seen.count(s) == 0) {
            seen.insert(s);
            order.push_back(s);
        } else {
            order.erase(remove(order.begin(), order.end(), s), order.end());
            order.push_back(s);
        }
    }

    string ans = "";
    for (int i = order.size() - 1; i >= 0; i--) {
        string s = order[i];
        ans += s.substr(s.size() - 2);
    }

    cout << ans << endl;

    return 0;
}
