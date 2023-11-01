#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){
 
   int T;                     cin>>T;
   while(T--){
      int n;                  cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      sort(a.begin(),a.end());


      ll ans;



      auto Possible=[&](ll x)->bool{
         int cnt=1;
         for(int l=0,r=l+1;r<n;){
            if(a[l]+x+x>=a[r]){
               r++;
            }
            else{
               cnt++;
               l=r;
               r=l;
            }
         }
         return (cnt<4);
      };

      ll low=0,high=1000000000000000;

      while(low<=high){
         ll mid=low+(high-low)/2LL;

         if(Possible(mid)){
            ans=mid;
            high=mid-1LL;
         }
         else{
            low=mid+1LL;
         }
      }

      cout<<ans<<endl;


   }
   return 0;
}
