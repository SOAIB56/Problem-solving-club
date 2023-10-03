#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[26] = {0};
        int l;
        cin >> l;
        char s[l];
        for (int i = 0; i < l; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < l; i++)
        {
            int d = s[i] - 'A';
            if (!a[d])
                a[d] = 2;
            else
                a[d]++;
        }
        int cur = 0, sum = 0;
        while (cur < 26)
        {
            sum += a[cur];
            cur++;
        }
        cout << sum << endl;
    }
    return 0;
}