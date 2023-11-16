#include <iostream>
using namespace std;

bool isTop10(int X) {
    if (X <= 10) return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (isTop10(X)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
