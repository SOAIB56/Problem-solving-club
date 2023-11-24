#include<bits/stdc++.h>

using namespace std;
#include<bits/stdc++.h>
using namespace std;

int arr[8001], is[8001];
int main()





{

	int x; 
    cin>>x; 
    while(x--)
	{
		int n; cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			is[i + 1] = 0;
		}

		for (int i = 0; i < n; ++i)
		{
			int sm = arr[i];

			for (int j = i + 1; j < n; ++j)
			{
				sm += arr[j];

				if (sm > n)
					break;

				is[sm] = 1;
			}
		}

		int ans = 0;

		for (int i = 0; i < n; ++i)
			if (is[arr[i]])
				ans++;

		cout << ans << '\n';
	}
	return 0;
}