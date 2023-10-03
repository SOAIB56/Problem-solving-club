#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int dif=a-b;
    int p=abs(dif);
    if(a>b && p>=1)
    {
        int res=a+a-1;
            cout<<res;
        
    }
    else if( a<b && p>=1)
    {
         int res=b+b-1;
            cout<<res;
    }
    else
    {
        int rs=a+b;
        cout<<rs;
    }
    
    return 0;
}