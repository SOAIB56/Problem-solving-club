#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p=s.size();
    if(p<4)
    {
        for(int i=0;i<4-p;i++)
        {
            cout<<"0";
        }
    }
    cout<<s;
    return 0;
}