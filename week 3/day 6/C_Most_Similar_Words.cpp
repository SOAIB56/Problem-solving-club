#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vector<string> st;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            st.push_back(a);
        }
        int mn_moves = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string x = st[i];
                string y = st[j];
                // cout << x << " " << y << endl;
                int moves = 0;
                for (int k = 0; k < l; k++)
                {
                    // cout << x[k] << " " << y[k] << endl;

                    if (x[k] > y[k])
                    {
                        int dif_forward = x[k] - y[k];
                        int dif_back = (x[k] - 'a') + ('z' - y[k]);
                        moves += min(dif_forward, dif_back);
                    }
                    else
                    {
                        int dif_forward = y[k] - x[k];
                        int dif_back = (y[k] - 'a') + ('z' - x[k]);
                        moves += min(dif_forward, dif_back);
                    }
                }
                // cout << moves << endl;
                mn_moves = min(mn_moves, moves);
            }
        }
        cout << mn_moves << endl;
    }
    return 0;
}