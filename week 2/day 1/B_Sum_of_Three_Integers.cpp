#include<bits/stdc++.h>
using namespace std;
int count_triples(int K, int S) 
{
    int ans = 0;
    for (int X = 0; X <= K; X++) 
    {
        for (int Y = 0; Y <= K; Y++) 
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) 
            {
                ans++;
            }
        }
    }
    return ans;
}
int main() 
{
    int K, S;
    cin >> K >> S;
    int ans = count_triples(K, S);
    cout << ans<<endl;
    return 0;
}
