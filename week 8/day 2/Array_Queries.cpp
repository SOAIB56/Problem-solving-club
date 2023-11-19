#include <iostream>
#include <algorithm>

using namespace std;

void build(int node, int start, int end, int* arr, int* tree) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid, arr, tree);
    build(2 * node + 1, mid + 1, end, arr, tree);
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

int query(int node, int start, int end, int left, int right, int* tree) {
    if (right < start || left > end) {
        return 1e9;
    }
    if (left <= start && right >= end) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int leftMin = query(2 * node, start, mid, left, right, tree);
    int rightMin = query(2 * node + 1, mid + 1, end, left, right, tree);
    return min(leftMin, rightMin);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cout << "Case " << t << ":" << endl;

        int n, q;
        cin >> n >> q;

        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int* tree = new int[4 * n];
        build(1, 0, n - 1, arr, tree);

        for (int i = 0; i < q; i++) {
            int left, right;
            cin >> left >> right;
            int minVal = query(1, 0, n - 1, left - 1, right - 1, tree);
            cout << minVal << endl;
        }

        delete[] arr;
        delete[] tree;
    }

    return 0;
}
