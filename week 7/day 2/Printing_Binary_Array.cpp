#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<int> ans(n);

        if (n == 1) {
            if (arr[0] == 1)
                ans[0] = 0;
            else
                ans[0] = 1;

            for (int i = 0; i < n; ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;

            t--;
            continue;
        }

        int score1 = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] != arr[i + 1]) {
                score1++;
            }
        }

        int ind = 0;

        if (arr[ind] == 0 && arr[ind + 1] == 1) {
            int start = 1;
            while (score1 >= 0) {

                if (start == 1) {
                    ans[ind] = 1;
                    start = 0;
                } else {
                    ans[ind] = 0;
                    start = 1;
                }
                ind++;
                score1--;
            }
            for (int i = ind; i < n; i++) {
                ans[i] = ans[i - 1];
            }
        } else {
            int start = 1;
            while (score1 >= 0) {

                if (start == 1) {
                    ans[ind] = 0;
                    start = 0;
                } else {
                    ans[ind] = 1;
                    start = 1;
                }
                ind++;
                score1--;
            }

            for (int i = ind; i < n; i++) {
                ans[i] = ans[i - 1];
            }
        }

        int isSame = 0;
        int cn = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == arr[i])
                cn++;
        }

        if (cn == n) {
            int d = 0;
            if (arr[0] == 1)
                d = 0;
            else if (arr[0] == 0)
                d = 1;
            for (int i = 0; i < n; i++)
                ans[i] = d;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}
