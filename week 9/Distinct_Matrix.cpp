
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 

void usool()
{
  int n;
  cin>>n;
  
  if(n==2)
  {
      cout<<-1<<endl;
      return ;
  }
  int a[n][n]={};
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(j==0 || i==j)
            a[i][j]=1;
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
        cout<<a[i][j];   
      }
      cout<<endl;
  }
  
  
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
    while(t--)
    {
      usool();
    }
 
  return 0;
}