#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isValidArrangement(const vector<ll>& blue, const vector<ll>& red, ll n) {
    for (ll i = 0; i < blue.size(); i++) {
        if (blue[i] < i + 1) {
            return false;
        }
    }
    for (ll i = 0; i < red.size(); i++) {
        if (red[i] > n - i) {
            return false;
        }
    }
    return true;
}

int main() {
    ll tt;
    cin >> tt;

    while (tt--) {
        ll n;
        cin >> n;
        ll a[n];

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        vector<ll> blue, red;
        for (ll i = 0; i < n; i++) {
            if (s[i] == 'B') {
                blue.push_back(a[i]);
            } else {
                red.push_back(a[i]);
            }
        }

        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end(), greater<ll>());

        bool ok = isValidArrangement(blue, red, n);

        if(ok)
            {
                cout<<"YES"<<endl;
            }
            else 
            cout<<"NO"<<endl;
    }

    return 0;
}

// if(ok)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else 
//             cout<<"NO"<<endl;