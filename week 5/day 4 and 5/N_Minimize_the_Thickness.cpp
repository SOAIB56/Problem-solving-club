#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int sum = accumulate(v.begin(), v.end(), 0);
        int mini = n, temp = 0, count = 0;

        for (int i = 0; i < n; i++) {
            temp += v[i];
            count++;
            int temp_maxo = 0;

            if (sum % temp == 0) {
                temp_maxo = count;
                int temp_sum = 0, temp_count = 0;

                for (int j = i + 1; j < n; j++) {
                    temp_sum += v[j];
                    temp_count++;

                    if (temp_sum == temp) {
                        temp_maxo = max(temp_maxo, temp_count);
                        temp_sum = 0;
                        temp_count = 0;
                    }
                }

                if (temp_sum == 0) {
                    mini = min(mini, temp_maxo);
                }
            }
        }

        cout << mini << endl;
    }
    return 0;
}
