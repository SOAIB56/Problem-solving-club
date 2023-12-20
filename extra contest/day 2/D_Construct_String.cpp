#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        string s;
        cin>>s;
       cout << s[0];

        // Print characters that are different from the previous one
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1]) {
                cout << s[i];
            }
        }
        cout<<endl;
    }
    
    return 0;
}