#include <iostream>
#include <string>
using namespace std;

// Function to return the sum of digits of a number
int sum_of_digits(string n) {
    // Initialize the sum
    int sum = 0;
    // Loop through the characters of the string
    for (char c : n) {
        // Convert the character to an integer and add it to the sum
        sum += c - '0';
    }
    // Return the sum
    return sum;
}

// Function to return the number of times a number can be replaced by the sum of its digits until it becomes one-digit
int count_times(string n) {
    // Initialize the count
    int count = 0;
    // Loop until the number has more than one digit
    while (n.size() > 1) {
        // Replace the number by the sum of its digits
        n = to_string(sum_of_digits(n));
        // Increment the count
        count++;
    }
    // Return the count
    return count;
}

// Main function
int main() {
    // Read the number as a string
    string n;
    cin >> n;
    // Call the function to count the number of times
    int ans = count_times(n);
    // Print the answer
    cout << ans << "\n";
    // Return 0 to indicate successful termination
    return 0;
}
