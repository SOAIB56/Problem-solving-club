
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll>mpp;
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
        if(mpp[arr[i]]>1&&arr[i]<=n)
        {
            a.push_back(arr[i]);
        }
        else if(arr[i]>n)
        {
            a.push_back(arr[i]);
        }
    }
    sort(a.begin(),a.end());
    ll aa=a.size();
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(mpp[i+1]==0)
        {
            ll z=a.back();
            a.pop_back();
            ll y=i+1;
            if(z%(z-y)==y)
            {
                continue;
            }
            else
            {
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<aa<<endl;
}
int main()
{
   
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
  
    return 0;
}