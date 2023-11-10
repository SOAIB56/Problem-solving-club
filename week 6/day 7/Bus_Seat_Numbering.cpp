#include <iostream>
using namespace std;

string seat_type(int n) {
    if (n % 2 == 1) {
        if (n <= 15) {
            return "Lower Single";
        } else {
            return "Upper Single";
        }
    } else {
        if (n <= 14) {
            return "Lower Double";
        } else {
            return "Upper Double";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << seat_type(n) << "\n";
    }
    return 0;
}
