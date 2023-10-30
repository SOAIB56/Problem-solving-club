#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long m;
        cin >> m;
        long long k = 1;
        
        while (k * 10 <= m) {
            k *= 10;
        }
        
        cout << m - k << endl;
    }
    
    return 0;
}
