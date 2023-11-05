#include<bits/stdc++.h>
using namespace std;

#define     all(x)                          x.begin(),x.end()

                         
// #define     return 0;                       
// #define     UNDEFINED                       0x3f
// #define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
// #define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


//..............................................Let's Start with int main(), shan't we.?......................................



int main(){
    
    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;
        int n;              n=s.size();

        if(count(all(s),'?')==n){
            cout<<n<<endl;
            continue;
        }
        if(count(all(s),'1')==0){
            int ans=0;
            in_range(i,0,n-1){
                ans++;
                if(s[i]=='0')break;
            }
            cout<<ans<<endl;
            continue;
        }
        int last_zero=-1;
        int ans;
        in_range_back(i,0,n-1){
            if(s[i]=='0')last_zero=i;
            else{
                if(s[i]=='1'){
                    if(last_zero==-1){
                        ans=n-i;
                        break;
                    }
                    else{
                        ans=last_zero-i+1;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
