#include<bits/stdc++.h>
using namespace std;

bool comparison(string a, string b) 
{
    
    for (int i = 0; i < a.size(); i++) 
    {
        
        if (a[i] == 'R' && b[i] == 'R')
            continue;

        if (a[i] != 'R' && b[i] != 'R')
            continue;
        return false;
    }
    return true;
}
int main() {
   
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool ans = comparison(a, b);
        if(ans==true)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
    }

    return 0;
}
