/*
Problem: Solid Diamond Star Pattern
Description:
Print a diamond-shaped pattern using stars (*) where both the upper and lower
halves are solid pyramids. The upper half increases in stars per row, and
the lower half decreases, forming a symmetrical diamond.

Example:
Input:
n = 5

Output:
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

Explanation:
- Upper half: Row i has i stars, left-aligned with leading spaces for centering.
- Lower half: Row i has i stars, decreasing from n-1 to 1, with leading spaces.
- Combination of upper and lower halves forms a solid diamond.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Solid Diamond Pattern, Star Pattern, Diamond Shape, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the number of rows for the upper half of the diamond.
2. Loop from i = 1 to n for the upper half:
   a. Print (n - i) leading spaces to center the pyramid.
   b. Print i stars consecutively.
   c. Move to the next line.
3. Loop from i = n-1 down to 1 for the lower half:
   a. Print (n - i) leading spaces.
   b. Print i stars consecutively.
   c. Move to the next line.
4. The combination of upper and lower halves creates a solid diamond shape.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for upper half
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // ✅ Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
