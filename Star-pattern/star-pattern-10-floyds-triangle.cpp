/*
Problem: Floyd's Triangle Pattern
Description:
Print a right-angled triangle pattern where numbers are printed sequentially
starting from 1 and increasing across rows. This pattern is known as Floyd's Triangle.

Example:
Input:
n = 5

Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Explanation:
- Row 1 → 1 number starting from 1
- Row 2 → 2 numbers starting from 2
- Row 3 → 3 numbers starting from 4
- Row 4 → 4 numbers starting from 7
- Row 5 → 5 numbers starting from 11
- The numbers continue sequentially row by row

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Floyd Triangle, Number Pattern, Sequential Numbers, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the number of rows.
2. Initialize a counter variable 'count' to 1.
3. Loop from i = 1 to n for each row:
   a. Loop j = 1 to i and print the current value of 'count'.
   b. Increment 'count' after printing each number.
4. Move to the next line after printing each row.
5. Repeat until all rows are printed.
6. Each row uses nested loops:
   - Outer loop → controls the row number
   - Inner loop → prints sequential numbers in the row
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

    int count = 1; // ✅ Initialize counter for sequential numbers

    // ✅ Outer loop: controls number of rows
    for (int i = 1; i <= n; i++) {

        // ✅ Inner loop: print numbers sequentially in the current row
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++; // Increment the counter
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
