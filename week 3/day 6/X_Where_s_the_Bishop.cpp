#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char a[10][10]; // Increased the array size to account for 1-based indexing
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> a[i][j];
            }
        }
        int pi = 2, pj = 2;
        bool found = false;
        for (int i = 2; i <= 7; i++) {
            for (int j = 2; j <= 7; j++) {
                if (a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#') {
                    pi = i;
                    pj = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        cout << pi << " " << pj << endl;
    }
    return 0;
}
