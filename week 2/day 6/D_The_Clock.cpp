#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string s) {
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1]) return false;
  }
  return true;
}

string add_minutes(string s, int x) {
  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2));
  m += x;
  h += m / 60;
  m %= 60;
  h %= 24;
  string ans = "";
  if (h < 10) ans += "0";
  ans += to_string(h);
  ans += ":";
  if (m < 10) ans += "0";
  ans += to_string(m);
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int x;
    cin >> s >> x;
    int count = 0;
    string curr = s;
    do {
      if (is_palindrome(curr)) count++;
      curr = add_minutes(curr, x);
    } while (curr != s);
    cout << count << endl;
  }
  return 0;
}
