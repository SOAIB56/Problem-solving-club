#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> t(n);

    for (int i = 0; i < n; i++)
        cin >> t[i];

    int l = 0, h = *max_element(t.begin(), t.end()), mid;

    while (l <= h) {
        mid = l + (h - l) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (t[i] > mid)
                sum += t[i] - mid;
        }

        if (sum >= m) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    cout << ans;

    return 0;
}
