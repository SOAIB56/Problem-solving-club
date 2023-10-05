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
