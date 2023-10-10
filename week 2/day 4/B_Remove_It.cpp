#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int y:v)
    {
        if(y==x)
        {
            continue;
        }
        else
        cout<<y<<" ";
    }
    
    return 0;
}