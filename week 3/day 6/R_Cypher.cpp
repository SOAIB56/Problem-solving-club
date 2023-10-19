#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans[n];
    for (int i = 0; i < n; i++) {
      int b;
      string s;
      cin >> b >> s;
      ans[i] = a[i];
      for (int j = 0; j < b; j++) {
        if (s[j] == 'U') {
          ans[i]--;
          if (ans[i] == -1) ans[i] = 9;
        } else {
          ans[i]++;
          if (ans[i] == 10) ans[i] = 0;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
