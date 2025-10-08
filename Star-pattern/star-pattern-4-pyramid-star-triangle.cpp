/*
Problem: Full Pyramid Star Pattern
Description:
Print a full pyramid pattern using stars (*) for a given number of rows (n).

Example:
Input:
n = 5

Output:
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * *

Explanation:
- Each row contains an odd number of stars, increasing by 2 in every row.
- Spaces are used to center-align the pyramid.
- Formula for stars per row: 2*i - 1 (where i = current row number)

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Star Pattern, Pyramid Pattern, C++, Pattern Printing, DSA Patterns
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

        // ✅ Print stars (2*i - 1 stars per row)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
