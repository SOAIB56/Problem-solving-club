#include<bits/stdc++.h>
using namespace std;
bool has_distinct_digits(int y) 
{
  int freq[10] = {0};
  while (y > 0) 
  {
    int digit = y % 10;
    freq[digit]++;
    if (freq[digit] > 1) 
    {
      return false;
    }
    y /= 10;
  }
  return true;
}
int next_distinct_year(int y) 
{
  for (int i = y + 1; i <= 9999; i++) 
  {
    if (has_distinct_digits(i)) 
        return i;
  }
  return -1;
}

int main() 
{
  
  int y;
  cin >> y;
  int res=next_distinct_year(y);
  cout <<res << endl;
  
}
