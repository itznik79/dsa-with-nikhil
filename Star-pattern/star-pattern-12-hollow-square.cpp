/*
Problem: Hollow Square Star Pattern
Description:
Print a hollow square pattern using stars (*) for a given number of rows (n).
- The first and last rows are filled with stars.
- The first and last columns are filled with stars.
- All inner cells are empty (spaces).

Example:
Input:
n = 5

Output:
* * * * *
*       *
*       *
*       *
* * * * *

Explanation:
- Row 1 and row n → all stars
- Column 1 and column n → stars in each row
- Inner cells → spaces, creating a hollow effect

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Hollow Square Pattern, Star Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the size of the square.
2. Loop from i = 1 to n for each row:
   a. Loop j = 1 to n for each column:
      - If current cell is in first row, last row, first column, or last column → print '*'
      - Otherwise, print a space
   b. Move to the next line after printing each row.
3. Repeat until all rows are printed.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: size of the square
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1; // Exit program if input is invalid
    }

    // ✅ Outer loop: controls number of rows
    for (int i = 1; i <= n; i++) {

        // ✅ Inner loop: controls columns
        for (int j = 1; j <= n; j++) {

            // ✅ Check for border conditions to print stars
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  "; // Print space for hollow part
            }
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
