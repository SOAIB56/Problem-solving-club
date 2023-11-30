#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>brr[i];
    if(arr[0]!=brr[0])
    {
        cout<<"NO\n";
        return;
    }
    if(arr[n-1]!=brr[n-1])
    {
        cout<<"NO\n";
        return;
    }
    int a=0, b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) a++;
        else b++;
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]!=brr[i] && arr[i]==0 && b==0)
        {
            cout<<"NO\n";
            return;
        }
        if(arr[i]!=brr[i] && arr[i]==1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 return 0;
}