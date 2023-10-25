#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int aa=-1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if((a[i] & k)==k)
            {
                aa &= a[i];
            }

        }
        

        if (aa == k) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
