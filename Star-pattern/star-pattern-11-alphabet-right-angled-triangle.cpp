/*
Problem: Alphabet Triangle Pattern
Description:
Print a right-angled triangle pattern where each row contains consecutive
uppercase English letters starting from 'A'.

Example:
Input:
n = 5

Output:
A
A B
A B C
A B C D
A B C D E

Explanation:
- Row 1 → print letter A
- Row 2 → print letters A, B
- Row 3 → print letters A, B, C
- And so on, up to row n
- Each row prints consecutive letters starting from 'A'

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Alphabet Pattern, Triangle Pattern, Letters Pattern, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the number of rows.
2. Loop from i = 1 to n for each row:
   a. Loop j = 1 to i for columns in the row.
   b. Calculate the character to print: ch = 'A' + j - 1
   c. Print the character followed by a space.
3. Move to the next line after printing each row.
4. Repeat until all rows are printed.
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

        // ✅ Inner loop: print letters from 'A' up to the ith letter
        for (int j = 1; j <= i; j++) {
            char ch = 'A' + j - 1; // Calculate letter based on position
            cout << ch << " ";
        }

        // ✅ Move to next line after each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
