#include <bits/stdc++.h>

using namespace std;


#define ll long long int
#define vi vector<int>
#define pb push_back

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        vi u(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &u[i]);
        }

        map<int, vi> Indxs;
        for (int i = 0; i < n; i++) {
            Indxs[u[i]].pb(i);
        }
        while (q--) {
            int a, b;
            scanf("%d %d", &a, &b);
            if (Indxs[a].empty() || Indxs[b].empty()) {
                printf("NO\n");
                continue;
            }
            if (a == b) {
                printf("YES\n");
                continue;
            }
            if (Indxs[a].front() < Indxs[b].back()) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
