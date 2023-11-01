#include <iostream>

using namespace std;

long long countReallyBigNumbers(long long n, long long s) {
    long long left = 1, right = n;
    long long result = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sumOfDigits = 0;
        long long num = mid;

        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }

        if (mid - sumOfDigits >= s) {
            result = n - mid + 1;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    long long n, s;
    cin >> n >> s;

    long long result = countReallyBigNumbers(n, s);

    cout << result << endl;

    return 0;
}
