/*
Problem: Increasing Number Triangle Pattern
Description:
Print a right-angled triangle pattern of numbers where each row displays
numbers in increasing order starting from 1 up to the current row number.

Example:
Input:
n = 5

Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Explanation:
- Each row starts from 1 and prints numbers up to the row number.
- Row 1 → 1 number
- Row 2 → 2 numbers
- Row 3 → 3 numbers, and so on...

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Number Pattern, Triangle Pattern, Pattern Printing, C++, DSA Patterns
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1; // Exit program if input is invalid
    }

    // ✅ Outer loop: controls number of rows
    for (int i = 1; i <= n; i++) {

        // ✅ Inner loop: prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
