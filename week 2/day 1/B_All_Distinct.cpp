// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         int n;
//         cin>>n;
//         vector<int>v;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             int p;cin>>p;
//             v.push_back(p);
//         }
//         sort(v.begin(), v.end());
//         int tot=v.size();
//         int un=1;
//         for (size_t i = 0; i < n-1; i++)
//         {
//             /* code */
//             if(v[i]!=v[i+1])
//             un++;
//         }
//         if(un==1)
//         {
//             cout<<"0"<<endl;
//         }
//         else if(tot==un)
//         {
//             cout<<tot<<endl;
//             break;
//         }
//         else
//         {
//             int x=tot%un;
//             if(x==0)
//             {
//                 cout<<"2";
//             }
//             else
//             {
//                 cout<<"1";
//             }
//             cout<<endl;
//         }
       
//         //cout<<tot<<" "<<un<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> a(n);
//         unordered_map<int, int> freq;
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             freq[a[i]]++;
//         }
        
//         int maxLen = 0;
        
//         for (auto it = freq.begin(); it != freq.end(); it++) {
//             maxLen = max(maxLen, it->second);
//         }
        
//         if (maxLen % 2 == 0) {
//             cout << maxLen << endl;
//         } else {
//             cout << maxLen - 1 << endl;
//         }
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            v.push_back(p);
            freq[p]++;
        }

        sort(v.begin(), v.end());
        int tot = v.size();
        int un = 1;

        for (size_t i = 0; i < n - 1; i++) {
            if (v[i] != v[i + 1]) {
                un++;
            }
        }

        if (un == 1) {
            cout << "0" << endl;
        } else if (tot == un) {
            cout << tot << endl;
        } else {
            cout << min(tot % 2, 1) * 2 + un - 1 << endl;
        }
    }

    return 0;
}
