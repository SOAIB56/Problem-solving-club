#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c ;
    cin>>a>>b>>c;
    int p;
    if(a>b)
    {
        p=b/c;
        int rs=(p+1)*c;
        if(rs>=b && rs<=a)
        {
        cout<<rs;
        }
        else
        cout<<"-1";
        }
    else
    {
        p=a/c;
        int rs=(p+1)*c;
    if(rs>=a && rs<=b)
    {
        cout<<rs;
    }
    else
    cout<<"-1";
    }
    //int p=b/c;
    
    return 0;
}