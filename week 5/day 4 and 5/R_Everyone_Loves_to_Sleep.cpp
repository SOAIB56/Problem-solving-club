#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

    
    long long M=1e9+7;
    long long mod(long long x)
    {
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b)
    {
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b)
    {
        return mod(mod(a)*mod(b));
    }
    
    void solve ()
    {
        int n,H,M;
        cin>>n>>H>>M;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int h,m;
            cin>>h>>m;
            mp[h*60+m]++;
        }

        int t=0;
        while(!mp[(H*60 + M+ t)%(24*60)]) t++;
        t%=24*60;
        cout<<t/60<<" "<<t%60<<"\n";
    }
    int main()
    {
        // 
        //cout<<setprecision(10);
//        
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            // cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }