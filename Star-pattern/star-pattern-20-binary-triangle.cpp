/*
Problem: 1-0 Number Pyramid Pattern
Description:
Print a pyramid pattern of 1's and 0's in a triangular shape where the numbers
alternate in a checkerboard manner. The pattern uses the rule:
- If the sum of the row number and column number is odd → print 1
- Else → print 0

Example:
Input:
n = 5

Output:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Explanation:
- Each row i has i elements
- Elements alternate between 1 and 0 based on (i + j) % 2
- This creates a triangular pattern of 1's and 0's

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: 1-0 Pattern, Number Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the number of rows for the pyramid.
2. Loop from i = 1 to n for each row:
   a. Loop from j = 1 to i:
      - If (i + j) % 2 == 1 → print 1
      - Else → print 0
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
        return 1;
    }

    // ✅ Loop through rows
    for (int i = 1; i <= n; i++) {
        // Loop through columns for each row
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 1)
                cout << "1 ";
            else
                cout << "0 ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
