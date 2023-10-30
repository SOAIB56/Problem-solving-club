#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;
        vector<pair<int, int>> alarms;

        for (int i = 0; i < n; i++) {
            int hi, mi;
            cin >> hi >> mi;
            alarms.push_back({hi, mi});
        }

        sort(alarms.begin(), alarms.end());
        int k = alarms[0].first, p = alarms[0].second;
        int s = 0;

        for (int i = 0; i < n; i++) {
            if (k > H) {
                if (M > p) {
                    H++;
                    p = p + (60 - M);
                } else {
                    p = p - M;
                }

                if (H >= 24) {
                    H = H - 24;
                }

                if (H > k) {
                    k = k + (24 - H);
                } else {
                    k = k - H;
                }

                s = 1;
                break;
            } else if (k == H && p >= M) {
                k = 0;
                p = p - M;
                s = 1;
                break;
            }
        }

        if (s == 0) {
            k = alarms[0].first;
            p = alarms[0].second;
            if (M > p) {
                H++;
                p = p + (60 - M);
            } else {
                p = p - M;
            }

            if (H >= 24) {
                H = H - 24;
            }

            if (H > k) {
                k = k + (24 - H);
            } else {
                k = k - H;
            }
        }

        cout << k << " " << p << endl;
    }

    return 0;
}
