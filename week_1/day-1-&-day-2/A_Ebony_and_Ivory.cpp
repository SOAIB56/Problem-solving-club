#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int flag = 0;
  for (int x = 0; x <= c / a; x++)
  {
    int rem = c - x * a;
    if (rem % b == 0)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  
  return 0;
}
