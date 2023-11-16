#include <iostream>
using namespace std;

bool isMonopoly(int P, int Q, int R, int S) {
    if (P > Q + R + S) return true;
    if (Q > P + R + S) return true;
    if (R > P + Q + S) return true;
    if (S > P + Q + R) return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;
        if (isMonopoly(P, Q, R, S)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
