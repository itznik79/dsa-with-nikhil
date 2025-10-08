/*
Problem: Repeated Number Triangle Pattern
Description:
Print a right-angled triangle pattern where each row contains the same number,
equal to the current row number, repeated for the row's length.

Example:
Input:
n = 5

Output:
1
22
333
4444
55555

Explanation:
- Row 1 → print number 1 once
- Row 2 → print number 2 twice
- Row 3 → print number 3 three times
- And so on, up to row n
- Each row number is repeated as many times as its row index

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Number Pattern, Triangle Pattern, Repeated Numbers, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the number of rows.
2. Loop from i = 1 to n for each row:
   a. Print the number i exactly i times.
   b. Move to the next line after printing each row.
3. Continue until all rows are printed.
4. Each row uses nested loops: 
   - Outer loop → controls row number
   - Inner loop → prints repeated numbers
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

        // ✅ Inner loop: print the current row number i, i times
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
