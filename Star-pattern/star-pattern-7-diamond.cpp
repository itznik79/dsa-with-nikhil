/*
Problem: Diamond Star Pattern
Description:
Print a diamond-shaped pattern using stars (*) for a given number of rows (n).
The diamond consists of two parts:
1. Upper pyramid (including middle row)
2. Lower inverted pyramid

Example:
Input:
n = 5

Output:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

Explanation:
- The first half is an increasing pyramid:
  Each row has 2*i - 1 stars (where i = current row number starting from 1)
  Spaces are printed before stars to center-align the pyramid.
- The second half is a decreasing pyramid:
  Rows start from n-1 and decrease to 1.
  Spaces and stars follow the same logic as the upper pyramid but in reverse.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Diamond Pattern, Star Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the number of rows for the upper half of the diamond.
2. Loop from i = 1 to n to print the upper pyramid:
   a. Print (n-i) spaces for alignment.
   b. Print (2*i - 1) stars for the current row.
3. Loop from i = n-1 down to 1 to print the lower inverted pyramid:
   a. Print (n-i) spaces for alignment.
   b. Print (2*i - 1) stars for the current row.
4. Each row is followed by a newline to move to the next row.

Logic:
- The total number of stars in a row follows the formula: 2*i - 1
- Leading spaces ensure that the pyramid is centered.
- The diamond is symmetrical: the lower half mirrors the upper half.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for the upper half of the diamond
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Upper pyramid (including middle row)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // ✅ Lower inverted pyramid
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
