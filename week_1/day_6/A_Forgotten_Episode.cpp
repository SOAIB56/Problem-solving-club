// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n-1;i++)
//     {
       
//          int p; cin>>p;
//         v.push_back(p);
//     }
//     sort(v.begin(),v.end());
//      long long int sum=0;
//      long long int s=(n*(n+1))/2;
//     for(int i=0;i<n-1;i++)
//     {
//        //cout<<v[i]<<" ";
//        sum+=v[i];
        
//     }
//     long long int r=s-sum;
//     cout<<r;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; 
    cin >> n;
    bool watched[n + 1]; 
    for (int i = 1; i <= n; i++)
     {
        watched[i] = false; 
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int a; 
        cin >> a;
        watched[a] = true; 
    }
    int ans; 
    for (int i = 1; i <= n; i++) 
    {
        if (!watched[i]) 
        { 
            ans = i; 
            break;
        }
    }
    cout << ans; 
    return 0;
}
