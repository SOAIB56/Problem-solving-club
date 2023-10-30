#include<bits/stdc++.h>
using namespace std;
void p(int n){
    cout<<n<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, x;
        cin >> l >> r >> x;

        int a, b;
        cin >> a >> b;
        if(a>b) swap(l,r);
        if(a == b) p(0);
        else if(abs(a-b)>=x) p(1);
        else if(abs(r-b)>=x) p(2);
        else if(abs(a-l)>=x) p(2);
        else if(abs(r-a)>=x && abs(b-l)>=x) p(3);
        else p(-1);
        
    }

    return 0;
}