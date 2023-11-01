#include <iostream>
#include <vector>

using namespace std;

bool canFill(vector<int>& vessels, int m, int capacity) {
    int containers = 1;
    int currentCapacity = 0;

    for (int vessel : vessels) {
        if (vessel > capacity) {
            return false; // A vessel cannot fit into the container; increase capacity.
        }

        if (currentCapacity + vessel > capacity) {
            containers++;
            currentCapacity = 0;
        }

        currentCapacity += vessel;
    }

    return containers <= m;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<int> vessels(n);
        int maxCapacity = 0;

        for (int i = 0; i < n; i++) {
            cin >> vessels[i];
            maxCapacity = max(maxCapacity, vessels[i]);
        }

        int low = maxCapacity, high = 1e9;
        int result = 1e9;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canFill(vessels, m, mid)) {
                result = min(result, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
