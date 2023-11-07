#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n ;
        ll i, a[n];
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        ll cunt = 0;
        bool no = false;
        for(i = n-2; i >= 0; i--){
            if(a[i+1] == 0){
                no = true;
                break;
            }
            while(a[i] >= a[i+1]){
                cunt++;
                a[i]/=2;
            }

        }
        if(no) cout<<"-1";
        else cout<<cunt;
        cout<<endl;
    }
}