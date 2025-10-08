/*
Problem: Number Pyramid Pattern (Increasing then Decreasing)
Description:
Print a pyramid pattern of numbers where each row first increases from 1 up 
to the row number and then decreases back to 1, forming a symmetric number pyramid.

Example:
Input:
n = 4

Output:
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

Explanation:
- Row i prints numbers from 1 to i in increasing order
- Then prints numbers from i-1 down to 1 in decreasing order
- This forms a symmetric pyramid pattern of numbers

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Number Pyramid, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the number of rows for the pyramid.
2. Loop from i = 1 to n for each row:
   a. Loop from j = 1 to i and print numbers in increasing order.
   b. Loop from k = i-1 down to 1 and print numbers in decreasing order.
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
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int k = i - 1; k >= 1; k--) {
            cout << k << " ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
