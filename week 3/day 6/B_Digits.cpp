#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int N, K;
  cin >> N >> K;
  int digits = 0;
  while (N > 0) 
  {
    N /= K;
    digits++;
  }
  cout << digits << endl;
  
  return 0;
}
