#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int t;						cin>>t;
   while(t--){
   		ll n;					cin>>n;

   		ll ans=0;
   		while(n!=0){
   			ans+=n;
   			n/=2LL;
   		}

   		cout<<ans<<endl;
   }
   return 0;
}
