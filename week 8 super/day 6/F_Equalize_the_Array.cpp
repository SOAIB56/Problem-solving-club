#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fi first
#define print(v) for(ll i:v) cout << i << ' '
#define se second
#define pb push_back
#define nn "\n"
#define all(p) p.begin(),p.end()
#define zz(v) (ll)v.size()
// #define S(a) scanf("%lld",&a)


int main()
{
    

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll ans;
        ll ar[n];
        ll mx = 1;
        map<ll, ll> mp;
        set<ll> st;

        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
            mp[ar[i]]++;
            mx = max(mx, mp[ar[i]]);
        }

        ans = 1e18;
        vector<ll> v;

        for (ll j : st)
        {
            v.pb(mp[j]);
        }

        sort(all(v));

        ll m = zz(v);
        ll pre[m];
        pre[0] = v[0];

        for (ll i = 1; i < m; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }

        for (ll i = 0; i <= mx; i++)
        {
            ll cnt = 0;
            ll z = lower_bound(all(v), i) - v.begin();
            ll tot = pre[m - 1];

            if (z > 0)
            {
                cnt += pre[z - 1];
                tot -= pre[z - 1];
            }

            ll l = z, r = m - 1;
            cnt += tot - ((r - l + 1) * i);
            ans = min(ans, cnt);
        }

        cout << ans << nn;
    }

    return 0;
}
