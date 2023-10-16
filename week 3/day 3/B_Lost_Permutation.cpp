#include <bits/stdc++.h>
using namespace std;
#define     ll                              long long int
int main()
{

    int t;                      
    cin>>t;
    while(t--)
    {
        int m,s;                
        cin>>m>>s;
        vector<int> b(m);
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        vector<bool> taken(1111,false);
        
        for(int i=0;i<m;i++)taken[b[i]]=true;
        
        int mx=*max_element(b.begin(),b.end());

        int sum=0;
        bool ok=false;
        int curr=1;
        while(true){
            if(taken[curr]){
                curr++;
                continue;
            }
            sum+=curr;
            taken[curr]=true;
            if(sum==s){
                bool imp=false;
                for(int i=curr;i<=mx;i++){
                    if(!taken[i]){
                        imp=true;
                        break;
                    }
                }
                if(!imp){
                    ok=true;
                }
                break;
            }
            curr++;
            if(sum>s)break;
        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
