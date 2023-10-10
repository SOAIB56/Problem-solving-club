#include<bits/stdc++.h>
using namespace std;
void prefix_sum(long long arr[], int n, long long pre[]) 
{
  pre[0] = arr[0];
  for (int i = 1; i < n; i++) 
  {
    pre[i] = pre[i - 1] + arr[i];
  }
}
long long query(long long pre[], int l, int r) 
{
  if (l == 0) return pre[r];
  return pre[r] - pre[l - 1];
}

int main() 
{
  int n, m;
  cin >> n;
  long long v[n];
  for (int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  long long u[n];
  for (int i = 0; i < n; i++) 
  {
    u[i] = v[i];
  }
  sort(u, u + n);
  long long pre_v[n], pre_u[n];
  prefix_sum(v, n, pre_v);
  prefix_sum(u, n, pre_u);
  cin >> m;
  for (int i = 0; i < m; i++) 
  {
    int type, l, r;
    cin >> type >> l >> r;
    l--;
    r--;
    if (type == 1) 
    {
      cout << query(pre_v, l, r) << endl;
    } 
    else 
    {
      cout << query(pre_u, l, r) << endl;
    }
  }
}
