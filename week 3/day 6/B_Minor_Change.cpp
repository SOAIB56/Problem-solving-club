#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss; cin>>ss;
    string tt; cin>>tt;
    //cout<<ss<<" "<<tt;
    int cnt=0;
    for (int  i = 0; i < ss.size(); i++)
    {
        /* code */
        if(ss[i] != tt[i])
            {
                cnt++;
            }
        for (int j = 0; j < tt.size(); j++)
        {
            /* code */
            
        }
        
    }
    cout<<cnt;
    
    return 0;
}