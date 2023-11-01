#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int caseNumber = 1;
    
    while (true) {
        int N, Q;
        cin >> N >> Q;
        
        if (N == 0 && Q == 0) {
            break;
        }
        
        vector<int> marbles(N);
        
        for (int i = 0; i < N; i++) {
            cin >> marbles[i];
        }
        
        sort(marbles.begin(), marbles.end());
        
        cout << "CASE# " << caseNumber << ":" << endl;
        
        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;
            
            int pos = lower_bound(marbles.begin(), marbles.end(), query) - marbles.begin();
            
            if (pos < N && marbles[pos] == query) {
                cout << query << " found at " << pos + 1 << endl;
            } else {
                cout << query << " not found" << endl;
            }
        }
        
        caseNumber++;
    }
    
    return 0;
}
