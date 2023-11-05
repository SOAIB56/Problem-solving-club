#include<bits/stdc++.h>

using namespace std;
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     all(x)                          x.begin(),x.end()

bool cond(pair<char,int>a,pair<char,int>b)
{
    return (a.first>b.first);
}

int main()
{
  
    int t;                  
    cin>>t;
    while(t--)
    {
        string s;           
        cin>>s;
        int n=s.size();
        int p;              
        cin>>p;

        vector<pair<char,int>> v;
        int cost=0;
        in_range(i,0,n-1){
            v.push_back({s[i],i});
            cost+=(s[i]-96);
        }

        vector<int> Indxs(n+1,0);

        sort(all(v),cond);

        for(auto i:v){
            if(cost<=p)break;
            cost-=(i.first-96);
            Indxs[i.second]=-1;
        }

        in_range(i,0,n-1){
            if(Indxs[i]!=-1){
                cout<<s[i];
            }
        }cout<<endl;
    }
     return 0;
}
