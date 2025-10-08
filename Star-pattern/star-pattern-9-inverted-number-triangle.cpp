/*
Problem: Decreasing Number Triangle Pattern
Description:
Print a right-angled triangle pattern where each row contains numbers
starting from 1 up to a decreasing limit, forming a decreasing triangle.

Example:
Input:
n = 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Explanation:
- Row 1 → numbers from 1 to 5
- Row 2 → numbers from 1 to 4
- Row 3 → numbers from 1 to 3
- Row 4 → numbers from 1 to 2
- Row 5 → number 1
- Each row decreases the number of elements by 1 from the previous row

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Number Pattern, Triangle Pattern, Decreasing Numbers, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the number of rows.
2. Loop from i = 1 to n for each row:
   a. Print numbers from 1 to (n - i + 1).
   b. Move to the next line after printing each row.
3. Continue until all rows are printed.
4. Each row uses nested loops:
   - Outer loop → controls row number
   - Inner loop → prints decreasing number sequence
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

        // ✅ Inner loop: print numbers from 1 to (n - i + 1)
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
