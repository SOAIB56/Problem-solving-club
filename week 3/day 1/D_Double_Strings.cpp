#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<string> vs(n);
        set<string> ss;

       
        for (int i = 0; i < n; i++) {
            cin >> vs[i];
            ss.insert(vs[i]);
        }

        
        string result(n, '0');

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < vs[i].length(); j++) {
                string prefix = vs[i].substr(0, j);
                string suffix = vs[i].substr(j);

                if (ss.count(prefix) && ss.count(suffix)) {
                    result[i] = '1';
                    break;  
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}
