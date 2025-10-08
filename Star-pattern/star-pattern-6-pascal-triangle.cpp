/*
Problem: Pascal's Triangle Pattern
Description:
Print a pyramid-shaped triangle of numbers known as Pascal's Triangle.
Each row represents binomial coefficients C(i, j) for row i and position j.
This pattern is widely used in combinatorics, probability, and algebra.

Example:
Input:
n = 5

Output:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation:
- Each row starts and ends with 1.
- Inner numbers are calculated using the previous number in the row.
- Formula: next_value = current_value * (i - j) / (j + 1)
  where i = row index (starting from 0)
        j = position index in the row (starting from 0)

Step-by-step Approach:
1. Take input 'n' for number of rows.
2. Loop from row 0 to row n-1.
3. Print leading spaces to form the pyramid shape.
4. Initialize the first number in each row as 1.
5. Loop through positions in the row:
   a. Print the current value.
   b. Calculate the next value using: next_value = current_value * (i - j) / (j + 1)
6. Move to the next line and repeat until all rows are printed.

Why this formula works:
- Each number in Pascal's Triangle is a **binomial coefficient**:
  C(i, j) = i! / (j! * (i-j)!)
- Instead of calculating factorials (which is slow for big numbers),
  we use the **iterative formula**: 
    next_value = current_value * (i - j) / (j + 1)
- This formula calculates the next number in the row directly from the previous number.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Pascal Triangle, Number Pattern, Binomial Coefficient, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Loop through each row
    for (int i = 0; i < n; i++) {
        int value = 1; // First element in each row is always 1

        // ✅ Print leading spaces for pyramid alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // ✅ Print numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); // Calculate next value using binomial formula
        }

        // ✅ Move to next line
        cout << endl;
    }

    return 0; // ✅ Program completed successfully
}
