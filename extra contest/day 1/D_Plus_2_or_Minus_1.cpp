#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int Y;
        cin >> Y;

        if (Y == 0) {
            cout << 1 << endl;
            continue;
        }

        cout << 2 * Y + Y << endl;
    }

    return 0;
}
