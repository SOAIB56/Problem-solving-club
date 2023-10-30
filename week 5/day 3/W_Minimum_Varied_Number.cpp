#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int n[11];
        int s = 9, i = 0;
        while (x) {
            if (x >= s) {
                x -= s;
                n[i++] = s;
            }
            s--;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << n[j];
        cout << endl;
    }
    
    return 0;
}
