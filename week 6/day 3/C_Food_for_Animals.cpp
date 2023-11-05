#include <bits/stdc++.h>
using namespace std;




int main()
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y;
        cin >> x >> y;

        x = max(0, x - a);
        y = max(0, y - b);
        (c >= x + y) ? 
        cout << "YES" << endl : cout << "NO" << endl;
         
    }
    return 0;
}
   
