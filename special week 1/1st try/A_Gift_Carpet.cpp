#include <bits/stdc++.h>

//typedef long long int ll;
//typedef long double LD;

using namespace std;

void solve()
{
    int n, m, it = 0; cin >> n >> m;
    string s[n], temp = "vika"; 
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(s[j][i] == temp[it]) {
                it++;
                if (it == 4) {
                    cout << "YES" << endl; return;
                }
                break;
            }
        }
    }
    cout << "NO" << endl;
}


int main()
{
    
    int t;       
    cin >> t;   
    while (t--)  
    {           
        solve(); 
    }
    return 0;
}



