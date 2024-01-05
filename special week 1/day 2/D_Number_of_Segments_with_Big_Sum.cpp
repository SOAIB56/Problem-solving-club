#include <iostream>
using namespace std;

int main() {
  int n;
  long long targetSum;
  cin >> n >> targetSum;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long result = 0;
  int left = 0, right = 0;
  long long currentSum = 0;
  while (right < n) {
    currentSum += arr[right];
    right++;
    while (currentSum >= targetSum) {
      currentSum -= arr[left];
      left++;
    }
    result += left;
  }

  cout << result << endl;
  return 0;
}
