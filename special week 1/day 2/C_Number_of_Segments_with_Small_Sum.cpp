#include <iostream>
using namespace std;

int main() {
  int n;
  long long s;
  cin >> n >> s;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long ans = 0;
  int l = 0, r = 0;
  long long sum = 0;
  while (r < n) {
    sum += a[r];
    r++;
    while (sum > s) {
      sum -= a[l];
      l++;
    }
    ans += r - l;
  }

  cout << ans << endl;
  return 0;
}
