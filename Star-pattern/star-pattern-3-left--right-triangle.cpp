/********************************************************************************
 * Description : Program to print a right-aligned right-angled triangle of stars (*)
 *               with n rows. Includes input validation and approach.
 * Input       : Number of rows (positive integer)
 * Output      : Right-aligned triangle of stars
 * Example     : Input: 5
 *               Output:
 *                   *
 *                  **
 *                 ***
 *                ****
 *               *****
 * Approach    : 
 *   1. Take input 'n' for the number of rows.
 *   2. Validate input to ensure 'n' is positive.
 *   3. Use nested loops:
 *      - Outer loop (i from 1 to n) represents each row.
 *      - First inner loop prints spaces (n-i spaces) for right alignment.
 *      - Second inner loop prints stars (i stars) for the row.
 *   4. Move to the next line after printing each row.
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
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1; // Exit with error
    }

    // Print right-aligned right-angled triangle
    for (int i = 1; i <= n; i++) {       
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) { 
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {     
            cout << "*";
        }
        cout << endl; // Move to next line
    }

    return 0;
}
