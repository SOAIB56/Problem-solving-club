//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long maxSum = 0;
    long long currentSum = 0;
   
    for (int i = 0; i < K; i++) {
        currentSum += Arr[i];
    }

    maxSum = currentSum;

    for (int i = K; i < N; i++) {
        currentSum += Arr[i] - Arr[i - K];
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends