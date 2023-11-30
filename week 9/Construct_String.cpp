#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print(int times,char c)
{
    
         if(times<=2)
         {
           while(times--)
            cout<<c;
         }
         else
         {
           while(times>2)
           {
               int x=times%3;
               
            //   if(x==0)
            //      times/=3;
            //   else
            //       times=times-(2*x);
               
               times=(times/3)+(times%3);
            }
             while(times--)
              cout<<c;
          }
}
void usool()
{ 
  int n;
  cin>>n;
   
   string s;
   cin>>s;
   
   int count=0;
   for(int i=0;i<n;i++)
   {
     int j=i;
      while(j<=n-1)
      {
        if(s[i]==s[j])
        {
          count++;
          j++;
        }
        else
         break;
      }
       print(count,s[i]);
       i=j-1;
       count=0;
       
   }
  
      
    
    cout<<endl;    
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
