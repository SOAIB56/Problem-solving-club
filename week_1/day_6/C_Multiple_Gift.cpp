#include<bits/stdc++.h>
using namespace std;
int main()
 {
    long long X, Y;
    cin >> X >> Y;

    long long len = 0;
    while (X <= Y) 
    {
        X *= 2;
        len++;
    }

    cout << len<< endl;

    return 0;
}
