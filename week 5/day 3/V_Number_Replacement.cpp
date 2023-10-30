
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        map<int,set<char>> m;
        for(int i=0;i<n;i++){
            m[v[i]].insert(s[i]);
        }
        for(auto x:m){
            if(x.second.size()>1){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;
}

int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}
