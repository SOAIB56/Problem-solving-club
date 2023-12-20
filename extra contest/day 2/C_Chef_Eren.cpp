#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n, a, b;
        cin>>n>>a>>b;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(i%2==0)
            {
                sum+=b;
            }
            else
            sum+=a;
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}