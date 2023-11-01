
#include <bits/stdc++.h>
using namespace std;



double dist(double x1, double y1, double x2, double y2) 
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool circle(double x1, double y1, double x2, double y2, double r) 
{
    double d = dist(x1, y1, x2, y2);
    if (d <= r * 2)
        return true;
    else
        return false;
}

void solve() 
{
    double pX, pY;
    cin >> pX >> pY;
    double aX, aY, bX, bY;
    cin >> aX >> aY >> bX >> bY;
    double l = 0, r = 1e4;

    double a1 = dist(0, 0, aX, aY), a2 = dist(pX, pY, aX, aY);
    double b1 = dist(0, 0, bX, bY), b2 = dist(pX, pY, bX, bY);

    for (int i = 0; i < 50; i++) {
        double m = l + (r - l) / 2.0;
        bool poss = false;
        if ((a1 <= m && a2 <= m) || (b1 <= m && b2 <= m))
            poss = true;
        if ((a1 <= m || b1 <= m) && (a2 <= m || b2 <= m) && circle(aX, aY, bX, bY, m))
            poss = true;
        if (poss)
            r = m;
        else
            l = m;
    }
    cout << fixed << setprecision(10) << l << '\n'; 
}

int main() {
 
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
