#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int sq=(a*a)+ (b*b);
    int pp=c*c;
    if(sq<pp)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    return 0;
}