#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int p;cin>>p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        int flag=0;
        if(v.size() <=2)
        {
            flag=0;
        }
        else{
            for (int i = 0; i < n-2; i++)
        {
            /* code */
            if(v[i]== v[i+1] && v[i]== v[i+2])
            {
                cout<<v[i];
                flag=1;
                break;

            }
        }
        }
        if(flag==0)
        {
            cout<<"-1";
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     cout<<v[i]<<" ";
        // }
        cout<<endl;
        
    }
    
    return 0;
}