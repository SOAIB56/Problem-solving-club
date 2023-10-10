#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }
    int mxx = 0;
    int max_G = 2;
    for (int k = 2; k <= 1000; k++) 
    {
        int gcd = 0;
        for (int i = 0; i < N; i++) 
        {
            if (A[i] % k == 0) 
            {
                gcd++;
            }
        }
        if (gcd >= mxx) 
        {
            mxx = gcd;
            max_G = k;
        }
    }

    cout << max_G << endl;

    return 0;
}
