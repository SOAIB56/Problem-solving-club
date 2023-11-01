#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll fun(ll a[],ll s,ll n,ll res)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<=res)
         continue;
        else
        {
            if(((s-a[i])<=0) )
             return 0;
            else
             s-=a[i];
        }
    } 
    if(s>0) 
     return 1;
    else
     return 0;

}
 
void usool()
{
  ll n,s;
  cin>>n>>s;
  ll a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
   
  ll low=0,high=100001;
  
  while(high-low>0)
  {
      ll mid=(low+high)/2;
      
      ll check=fun(a,s,n,mid);
      
      if(check==0)
       low=mid+1;
      else
       high=mid;
  }
  ll check=fun(a,s,n,low);
if(check==1)
 cout<<low<<endl;
else
 cout<<high<<endl;
    
}

 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
    while(t--) 
    {
      usool();
    }
 
  return 0;
}