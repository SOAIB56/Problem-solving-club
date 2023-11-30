
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll haribol()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+1)%b==(c+1)%d)
    {
        cout<<1<<endl;
    }
    else{
        ll mod = a%b;
        ll modifiedA = a-mod;
        ll lcmBD = (b*d)/__gcd(b,d);
        modifiedA += lcmBD;
        cout<<modifiedA-a<<endl;
    }
    return 0;
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        /* code */
        haribol();
    }

    return 0;
}
