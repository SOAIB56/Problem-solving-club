#include <iostream>
using namespace std;

// A function to check the date format
string checkDateFormat(string S) {
    // Extract the day, month and year from the date string
    int day = stoi(S.substr(0, 2));
    int month = stoi(S.substr(3, 2));
    int year = stoi(S.substr(6, 4));
    
    // Check if the date is valid in both formats
    bool validDDMMYYYY = (day >= 1 && day <= 31) && (month >= 1 && month <= 12);
    bool validMMDDYYYY = (month >= 1 && month <= 31) && (day >= 1 && day <= 12);
    
    // Return the appropriate output
    if (validDDMMYYYY && validMMDDYYYY) {
        return "BOTH";
    }
    else if (validDDMMYYYY) {
        return "DD/MM/YYYY";
    }
    else if (validMMDDYYYY) {
        return "MM/DD/YYYY";
    }
    else {
        return "INVALID";
    }
}

int main() {
    // Read the number of test cases
    int T;
    cin >> T;
    
    // Loop for each test case
    while (T--) {
        // Read the date string
        string S;
        cin >> S;
        
        // Check the date format and print the answer
        cout << checkDateFormat(S) << "\n";
    }
    return 0;
}
