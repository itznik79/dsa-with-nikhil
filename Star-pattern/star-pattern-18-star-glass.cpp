/*
Problem: Hollow Star Glass Pattern
Description:
Print a hollow star pattern in the shape of a glass using stars (*). The pattern
consists of an inverted hollow pyramid on top and an upright hollow pyramid at the
bottom, forming a glass-like structure.

Example:
Input:
n = 4

Output:
* * * * * * * * * 
  *           * 
    *       * 
      *   * 
        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 

Explanation:
- Top half: inverted hollow pyramid (first and last row fully filled, middle rows hollow)
- Bottom half: upright hollow pyramid (same logic)
- Leading spaces center-align the stars
- Only the border stars are printed; interior remains hollow

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Hollow Star Glass, Star Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as half the number of rows of the glass.
2. Loop from i = n down to 1 for the top inverted hollow pyramid:
   a. Print (n - i) leading spaces for centering
   b. Loop k = 1 to (2*i - 1):
      - Print '*' if it's the first row, last row, first column, or last column of current row
      - Else print spaces for hollow effect
3. Loop from i = 2 to n for the bottom upright hollow pyramid:
   a. Print (n - i) leading spaces
   b. Loop k = 1 to (2*i - 1):
      - Print '*' if it's the first row, last row, first column, or last column of current row
      - Else print spaces for hollow effect
4. The combination forms a hollow star glass.

*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for half of the glass
    cout << "Enter the number of rows for half of the pattern: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Top inverted hollow pyramid
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // Stars and hollow spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (i == n || i == 1 || k == 1 || k == 2 * i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // ✅ Bottom upright hollow pyramid
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // Stars and hollow spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (i == n || i == 1 || k == 1 || k == 2 * i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
