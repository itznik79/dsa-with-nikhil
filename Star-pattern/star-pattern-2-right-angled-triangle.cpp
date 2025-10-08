/********************************************************************************
     * Description : Program to print a left-aligned right-angled triangle of stars (*)
 *               with n rows. Includes input validation.
 * Input       : Number of rows (positive integer)
 * Output      : Triangle of stars
 * Example     : Input: 5
 *               Output:
 *               * 
 *               * * 
 *               * * * 
 *               * * * * 
 *               * * * * * 
  * Approach    : 
 *   1. Take input 'n' which is the number of rows.
 *   2. Validate input to ensure 'n' is positive.
 *   3. Use nested loops:
 *      - Outer loop (i from 1 to n) represents each row.
 *      - Inner loop (j from 1 to i) prints 'i' stars in the i-th row.
 *   4. After printing stars in a row, move to the next line.
 *   5. Continue until all rows are printed.
 * Time Complexity  : O(n^2)  -> Nested loop for printing
 * Space Complexity : O(1)    -> Constant extra space
 ********************************************************************************/
#include <iostream>
using namespace std;

 int main() {
    int n;

    // Input: Number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Input validation
    // optional but good practice
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1; // Exit with error
    }

    // Print left-aligned right-angled triangle
    for (int i = 1; i <= n; i++) {        // Loop for each row
        for (int j = 1; j <= i; j++) {    // Loop for printing stars in each row
            cout << "* ";
        }
        cout << endl;                     // New line after each row
    }

    return 0;
}
