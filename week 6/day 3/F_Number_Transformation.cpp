#include<bits/stdc++.h>
#define ll long long int
//#define endl "\n"
#define M 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(y % x == 0) cout<<"1 "<<y/x;
        else cout<<"0 0";
        cout<<endl;
    }
}