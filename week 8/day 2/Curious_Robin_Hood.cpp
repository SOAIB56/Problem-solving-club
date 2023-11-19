#include <iostream>

void update(int node, int start, int end, int index, int value, int* arr, int* tree) {
    if (index < start || index > end) {
        return;
    }
    if (start == end) {
        arr[index] += value;
        tree[node] += value;
        return;
    }
    int mid = (start + end) / 2;
    update(2 * node, start, mid, index, value, arr, tree);
    update(2 * node + 1, mid + 1, end, index, value, arr, tree);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int start, int end, int left, int right, int* tree) {
    if (right < start || left > end) {
        return 0;
    }
    if (left <= start && right >= end) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int leftSum = query(2 * node, start, mid, left, right, tree);
    int rightSum = query(2 * node + 1, mid + 1, end, left, right, tree);
    return leftSum + rightSum;
}

void build(int node, int start, int end, int* arr, int* tree) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid, arr, tree);
    build(2 * node + 1, mid + 1, end, arr, tree);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 1; t <= T; ++t) {
        std::cout << "Case " << t << ":" << std::endl;

        int n, q;
        std::cin >> n >> q;

        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        int* tree = new int[4 * n];
        build(1, 0, n - 1, arr, tree);

        for (int i = 0; i < q; i++) {
            int type, x, y;
            std::cin >> type >> x;

            if (type == 1) {
                std::cout << arr[x] << std::endl;
                update(1, 0, n - 1, x, -arr[x], arr, tree);
            } else if (type == 2) {
                std::cin >> y;
                update(1, 0, n - 1, x, y, arr, tree);
            } else if (type == 3) {
                std::cin >> y;
                int sum = query(1, 0, n - 1, x, y, tree);
                std::cout << sum << std::endl;
            }
        }

        delete[] arr;
        delete[] tree;
    }

    return 0;
}
