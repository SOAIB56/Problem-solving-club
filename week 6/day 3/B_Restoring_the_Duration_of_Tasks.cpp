#include<bits/stdc++.h>
using  namespace  std;




 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+4],br[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)cin>>br[i];
        vector<int>v;
        int z=0;
        for(int i=0;i<n;i++)
        {
            int x=br[i]-ar[i];
            int y=br[i]-z;
            z=br[i];
            v.push_back(min(x,y));
        }
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
