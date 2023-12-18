#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int B[n];
	    long long cur = 0;
	    for(int i=0;i<n;++i){
	        cin>>B[i];
	        long long z = i+1;
	       
	        if(B[i] == -1)cur += z;
	    }
	    
	   
	    long long tot = n;
	    tot*=(tot+1ll);
	    tot/=2ll;
	    
	  
	    tot -= cur;
	    
	 
	    long long ans = tot - cur;
	    
	    cout<<abs(ans)<<endl;;
	}
	return 0;
}