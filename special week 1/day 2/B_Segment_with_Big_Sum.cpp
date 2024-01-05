#include<bits/stdc++.h>
using namespace std;


int main() {
  int n;
  long long s;
  cin >> n >> s;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = n + 1;
  int l = 0, r = 0;
  long long sum = 0;
  while (r < n) {
    sum += a[r];
    r++;
    while (sum >= s) {
      ans = min(ans, r - l);
      sum -= a[l];
      l++;
    }
  }

  if (ans == n + 1) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
