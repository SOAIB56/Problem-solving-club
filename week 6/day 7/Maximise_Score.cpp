#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int optimalScore(int arr[], int n) {
    int ans = INT_MAX;

    // Loop through each index
    for (int i = 0; i < n - 1; ++i) {
        // Find the absolute difference between adjacent elements
        int diff = abs(arr[i] - arr[i + 1]);
        ans = min(ans, diff);
    }

    return ans;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;

        int arr[n]; // Array A
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Output the optimal score for each test case
        cout << optimalScore(arr, n) << endl;
    }

    return 0;
}
