
#include <iostream>
using namespace std;

int main() {
 int cs;
 cin>>cs;
 while(cs--)
 {
     int x;
     cin>>x;
     int arr[x*x];
     int y = 1;
     for(int v=0;v<x*x;v+=2)
     {
         arr[v]=y;
         y++;
     }
     for(int v=1;v<x*x;v+=2)
     {
         arr[v]=y;
         y++;
     }
     int z = 0;
     for(int v=0;v<x*x;v++)
     {
         cout<<arr[v]<<" ";
         z++;
         if(z%x==0) cout<<endl;
     }
 }
 return 0;
}