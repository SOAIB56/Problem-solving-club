#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;                  
    cin>>t;
    while(t--)
    {
        int n;              
        cin>>n;
        string s;           
        cin>>s;
        
        vector<ll> v;
        
        ll total=0;
        int cr=0;

        for(int i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    cr++;
                    total+=R;
                    v.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(L>R)
                {
                    cr++;
                    v.push_back(L-R);
                    total+=L;
                }
                else{
                    total+=R;
                }
            }
        }

        vector<ll> ans(n+1);

        for(int i=cr;i<=n;i++)
        {
            ans[i]=total;
        }

        sort(v.begin(),v.end(),greater<ll>());

        for(int i=cr-1;i>=1;i--)
        {
            total-=v.back();
            v.pop_back();
            ans[i]=total;
        }

        

        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
