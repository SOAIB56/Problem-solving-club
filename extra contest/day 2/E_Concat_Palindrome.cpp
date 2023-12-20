#include<bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string a, string b) {
    // Concatenate strings a and b
    string concatenated = a + b;
    
    // Count the frequency of each character
    unordered_map<char, int> freq;
    for (char ch : concatenated) {
        freq[ch]++;
    }

    // Count the number of characters with odd frequency
    int oddCount = 0;
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }

    // Palindrome can be formed if there is at most one character with odd frequency
    return oddCount <= 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        // Check if rearrangements can form a palindrome
        if (canFormPalindrome(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
