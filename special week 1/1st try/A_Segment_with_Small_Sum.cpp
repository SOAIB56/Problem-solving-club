#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> array(n);

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int start = 0, end = 0, currentSum = 0, maxSegmentLength = 0;

    while (end < n) {
        currentSum += array[end];

        while (currentSum > s) {
            currentSum -= array[start];
            ++start;
        }

        maxSegmentLength = max(maxSegmentLength, end - start + 1);

        ++end;
    }

    if (maxSegmentLength > 0) {
        cout << maxSegmentLength << endl;
    } else {
        cout << "0\n";
    }

    return 0;
}
