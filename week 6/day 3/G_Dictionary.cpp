#include<bits/stdc++.h>
// #define ll long long int
// #define endl "\n"
// #define M 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int x = (a[0] - 'a');
        int y = a[1] - 'a';
        if(x > y) cout<<x*25+y+1;
        else cout<<x*25+y;
        cout<<endl;
    }
}