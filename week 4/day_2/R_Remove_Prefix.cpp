#include <bits/stdc++.h>
using namespace std;

int main() 
{
  

    int t;
    cin >> t;

    while (t--) 
    {
        int x;
        cin >> x;
        int n[x];
        map<int, int> mp;
        int s = 0;

        for (int i = 0; i < x; i++) 
        {
            cin >> n[i];
        }

        for (int i = x - 1; i >= 0; i--) 
        {
            if (mp[n[i]] == 0)
                s++;
            else
                break;

            mp[n[i]]++;
        }

        cout << x - s << endl;
    }

    return 0;
}
