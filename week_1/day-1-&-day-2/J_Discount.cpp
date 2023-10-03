#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    float dif=a-b;
    float ps=(dif*100)/a;
    cout<<fixed<<setprecision(20)<<ps;
    return 0;
}