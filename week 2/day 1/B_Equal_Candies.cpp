#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int p;cin>>p;
            v.push_back(p);
        }
        int mm=*min_element(v.begin(), v.end());
        int eat=0;
        // if(v.size()==1)
        // {
        //     cout<<"0";
        // }
        // else if(v.size()>1)
        // {
            for (int i = 0; i < n; i++)
            {
                /* code */
                if(v[i]>mm)
                {
                    int x=v[i]-mm;
                    eat=eat+x;
                }
            }
            cout<<eat<<endl;
            
        //}
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Function to return the minimum number of candies to eat
// int min_candies(vector<int> a) {
//     // Find the minimum number of candies in any box
//     int min_a = *min_element(a.begin(), a.end());
//     // Initialize the answer
//     int ans = 0;
//     // Loop through all the boxes
//     for (int x : a) {
//         // Add the difference between the current box and the minimum box to the answer
//         ans += x - min_a;
//     }
//     // Return the answer
//     return ans;
// }

// // Main function
// int main() {
//     // Read the number of test cases
//     int t;
//     cin >> t;
//     // Loop through each test case
//     while (t--) {
//         // Read the number of boxes
//         int n;
//         cin >> n;
//         // Create a vector to store the number of candies in each box
//         vector<int> a(n);
//         // Read the number of candies in each box
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         // Call the function to find the minimum number of candies to eat
//         int ans = min_candies(a);
//         // Print the answer
//         cout << ans << "\n";
//     }
//     // Return 0 to indicate successful termination
//     return 0;
// }
