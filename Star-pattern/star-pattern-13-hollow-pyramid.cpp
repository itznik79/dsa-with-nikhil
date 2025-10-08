/*
Problem: Hollow Pyramid Star Pattern
Description:
Print a pyramid pattern using stars (*) where only the borders of the pyramid
are printed, and the inside is hollow.

Example:
Input:
n = 5

Output:
    *
   * *
  *   *
 *     *
*********

Explanation:
- The first row has 1 star at the center.
- Middle rows have stars at the beginning and end, with spaces in between.
- The last row is fully filled with stars.
- Leading spaces are used to center-align the pyramid.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Hollow Pyramid Pattern, Star Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the number of rows of the pyramid.
2. Loop from i = 1 to n for each row:
   a. Print (n - i) leading spaces to center-align.
   b. Loop k = 1 to (2*i - 1) to print characters:
      - If it's the first row, or first/last star in the row, or last row → print '*'
      - Else → print space for hollow effect
3. Move to the next line after each row.
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

        // ✅ Print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // ✅ Print stars and hollow spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            // Border stars
            if (i == n || k == 1 || k == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Hollow space inside pyramid
            }
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
