#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A, B; // the regular price and the discounted price
    cin >> A >> B;
    double ans; // the percentage of the discount
    ans = (double)(A - B) / A * 100; // calculate the discount as a fraction of the regular price and multiply by 100
    cout << fixed << setprecision(15) << ans << "\n"; // print the answer with 15 decimal places
    return 0;
}
