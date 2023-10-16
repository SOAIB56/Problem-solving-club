#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, i,j;
        cin >> n;
        string a[n];
        for(i = 0; i < n; i++) cin >> a[i];

        ll indexf[130][130] = {0};
        ll indexl[130][130] = {0};
        ll inf[130] = {0};
        ll inl[130] = {0};
        for(i = 0; i < n; i++)
        {
            indexf[a[i][0]][a[i][1]]++;
            inf[a[i][0]]++;
            indexl[a[i][1]][a[i][0]]++;
            inl[a[i][1]]++;

        }
        ll ans = 0, x, y;
        for(i = 90; i < 120; i++)
        {
            if(inf[i] > 1){
                x = inf[i];
                for(j = 90; j < 120; j++)
                {
                    if(indexf[i][j] > 0){
                        y = indexf[i][j];
                        ans = ans + y*(x-y);
                        x-=y;
                    }
                    if(x < 2) break;
                }
            }
        }
        for(i = 90; i < 120; i++)
        {
            if(inl[i] > 1){
                x = inl[i];
                for(j = 90; j < 120; j++)
                {
                    if(indexl[i][j] > 0)
                    {
                        y = indexl[i][j];
                        ans = ans + y*(x-y);
                        x-=y;
                    }
                    if(x < 2) break;
                }
            }
        }
        cout<<ans<<endl;;
        //cout<<endl;
    }
}