#include<bits/stdc++.h>
using namespace std;

#define     ll                              long long int
#define     all(x)                          x.begin(),x.end()                    

int main(){

    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;
        string t;           cin>>t;
        int n;              n=s.size();
        int m;              m=t.size();

        if(t.size()==1){
            if(t[0]=='a'){
                cout<<1<<endl;
            }
            else{
                ll ans=(1LL<<n);
                cout<<ans<<endl;
            }
        }
        else{
            if(count(all(t),'a')>0){
                cout<<-1<<endl;
            }
            else{
                ll ans=(1LL<<n);
                cout<<ans<<endl;
            }
        }
    }
     return 0;
}