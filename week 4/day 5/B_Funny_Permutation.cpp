#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;

        if(n==3){
            cout<<-1<<endl;
            continue;
        }
        else if(n==5){
            cout<<"5 4 1 2 3"<<endl;
            continue;
        }

        vector<int> ans(n+1);
        for(int i=1;i<=n;i++){
            ans[i]=(n-i+1);
        }

        if(n%2==1){
            swap(ans[(n/2)],ans[(n/2)+1]);
        }

        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
