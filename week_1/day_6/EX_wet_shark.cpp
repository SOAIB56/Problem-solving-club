#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> v;

    for (int i = 0; i < n; i++) {
        long long int p;
        cin >> p;
        v.push_back(p);
    }

    long long int evenSum = 0;

    for (int i = 0; i < n; i++) {
        evenSum += v[i];
    }

    if (evenSum % 2 != 0) {
        // Subtract the smallest odd number from the even sum to make it even
        long long int minOdd = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0 && v[i] < minOdd) {
                minOdd = v[i];
            }
        }
        evenSum -= minOdd;
    }

    cout << evenSum << endl;

    return 0;
}
